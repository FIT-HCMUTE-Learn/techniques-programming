#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct computer{
    string name, rule, genre;
    int32_t cost1, cost2;
} inp[maxarray];

bool computer_comp(computer a, computer b){
    if (a.name == b.name) return (a.genre < b.genre);
    else return (a.name < b.name);
}

int32_t computer_count(computer scan[], int32_t start, int32_t csize, string str)
{
    int32_t cnt = 0;
    for (int i = start; i < start+csize; i++)
        if (scan[i].genre == str) cnt++;
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore(1);
        getline(cin, inp[i].name); 
        getline(cin, inp[i].rule);
        getline(cin, inp[i].genre);
        cin >> inp[i].cost1 >> inp[i].cost2;
    }
    string str; cin.ignore(1); getline(cin, str);
    //=== Sort by GENRE and NAME
    cout << "\n=== SORT BY GENRE AND NAME\n";
    sort(inp, inp+n, computer_comp);
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << inp[i].name << '\n';
        cout << "Specifications: " << inp[i].rule << '\n';
        cout << "Genre: " << inp[i].genre << '\n';
        cout << "Cost 1: " << inp[i].cost1 << '\n';
        cout << "Cost 2: " << inp[i].cost2 << '\n';
        cout << "------------------------------\n";
    }
    if (computer_count(inp, 0, n, str) >= 10) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}