#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t plus; int32_t ex; 
    string str;
    for (int i = 1; i <= n; i++){
        str = to_string(i); ex = str.size();
        plus = 0;
        for (auto x : str){
            plus += int64_t(pow(int(x)-48, ex));
        }
        if (plus == i) cout << i << " ";
    }
    return 0;
}