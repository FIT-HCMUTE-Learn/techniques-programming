#include <bits/stdc++.h>
#define limit 10000
#define len 16

using namespace std;
vector <string> inp;
bool comp(string a, string b){
    if (a[0] == b[0]){
        if(a[0] == '0') return (a < b);
        else return (b > a);
    } else return (a[0] > b[0]);
}

int64_t Rand(int64_t l, int64_t h)
{
    return l + ((int64_t)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (int64_t)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (int64_t)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    fstream foi;
    foi.open("SONGUYEN.INP", ios::out);
    string str;
    for (int i = 0; i < limit/10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            str = "";
            for (int t = 0; t < len; t++)
                str += to_string(Rand(0, 1));
            foi << str << " ";
            inp.push_back(str);
        }
        foi << '\n';
    }
    fstream fout ("SONGUYEN.OUT", ios::out);
    sort(inp.begin(), inp.end(), comp);
    int32_t i, j; i = j = 0;
    while (i < limit)
    {
        j = 0;
        while (j < 10 && i < limit) 
        { fout << inp[i] << " "; j++; i++; }
        fout << '\n';
    }
    foi.close(); fout.close();
    return 0;
}