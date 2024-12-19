#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t plus = 0;
    int32_t tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp; plus += tmp;
    }
    cout << plus << '\n';
    return 0;
}