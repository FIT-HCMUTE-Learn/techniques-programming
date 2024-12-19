#include <bits/stdc++.h>

using namespace std; 

int64_t C(int32_t n, int32_t k){
    int64_t up = 1;
    for (int i = n-k+1; i <= n; i++)
        up *= int64_t(i);
    int64_t down = 1;
    for (int i = 1; i <= k; i++)
        down *= int64_t(i);
    return int64_t(up/down);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    cout << int64_t(C(n, k)) << '\n';
    return 0;
}