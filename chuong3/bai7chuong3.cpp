#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t f1, f2, fo;
    if (n < 3) cout << 1;
    else{
        f1 = f2 = 1;
        for (int i = 3; i <= n; i++){
            fo = f1+f2; f2 = f1; f1 = fo;
        }
        cout << fo;
    }
    return 0;
}