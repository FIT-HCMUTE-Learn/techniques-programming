#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    if (n == 1) cout << "1";
    else{
        cout << "1 1 ";
        int64_t f1, f2, f;
        f1 = f2 = 1;
        for (int i = 3; i <= n; i++){
            f = f1+f2; f2 = f1; f1 = f;
            cout << f << " ";
        }
    }
    return 0;
}