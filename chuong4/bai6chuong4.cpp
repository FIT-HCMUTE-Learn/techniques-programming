#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    if (n < 2) cout << n << '\n';
    else {
        int64_t f1, f2, fk;
        f1 = 0; f2 = 1;
        for (int i = 2; i <= n+1; i++){
            fk = f1+f2; f2 = f1; f1 = fk;
        }
        cout << fk << '\n';
    }
    return 0;
}