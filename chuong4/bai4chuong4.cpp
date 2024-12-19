#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, key; cin >> n >> key;
    int32_t tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp; inp.push_back(tmp);
    }
    sort(inp.begin(), inp.end());
    if (binary_search(inp.begin(), inp.end(), key))
        cout << "YES\n"; 
    else cout << "NO\n";
    return 0;
}