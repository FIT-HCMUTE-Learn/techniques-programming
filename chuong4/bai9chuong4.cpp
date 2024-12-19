#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x; 
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    if (n == 1) cout << inp[0] << '\n';
    else{
        int32_t answer = __gcd(inp[0], inp[1]);
        for (int i = 2; i < n; i++)
            answer = __gcd(answer, inp[i]);
        cout << answer << '\n';
    }
    return 0;
}