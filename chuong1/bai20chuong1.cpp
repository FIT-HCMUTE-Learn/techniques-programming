#include <bits/stdc++.h>
#define limit 101
#define line 30

using namespace std;
vector <int32_t> out;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ofstream foi ("SOCHAN.DAT");
    for (int t = 0; t < limit; t++)
        if (t%2 == 0) 
        { 
            foi << t << " "; 
            out.push_back(t); 
        }
    int32_t i, j; i = j = 0;
    int32_t maxx = out.size();
    while (i < maxx)
    {
        j = 0;
        while (i < maxx && j < line)
        { cout << out[i] << " "; i++; j++; }
        cout << '\n';
    }
    foi.close();
    return 0;
}