#include <bits/stdc++.h>

using namespace std;
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, tmp; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp; inp.push_back(tmp);
    }
    cout << *min_element(inp.begin(), inp.end()) << '\n'; 
    return 0;
}