#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; getline(cin, str);
    map <char, int32_t> mp;
    for (auto x : str) mp[x]++;
    for (auto it : mp){
        cout << it.first << " " << it.second << '\n';
    }
    return 0;
}