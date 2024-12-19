#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t multi = 1;
    for (int i = 1; i <= n; i++) multi *= int64_t(i);
    cout << multi << '\n';
    return 0;
}