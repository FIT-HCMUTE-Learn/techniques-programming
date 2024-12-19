#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    int64_t up, down;
    up = down = 1;
    for (int i = 2; i <= k; i++){
        down *= int64_t(i);
    }
    for (int i = n-k+1; i <= n; i++){
        up *= int64_t(i);
    }
    cout << up/down;
    return 0;
}