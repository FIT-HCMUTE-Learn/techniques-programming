#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp; inp.push_back(tmp);
    }
    do{
        for (int i = 0; i < n; i++) cout << inp[i] << " ";
        cout << '\n';
    } while (next_permutation(inp.begin(), inp.end()));
    return 0;
}