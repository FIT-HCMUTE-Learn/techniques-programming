#include <bits/stdc++.h>

using namespace std; 

int32_t back_num(int32_t num){
    if (num == 0) return 0;
    if (num == 1) return 1;
    if (num%2 == 0) return back_num(num/2);
    else return (back_num(num/2) + back_num(num/2+1));
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    cout << back_num(n) << '\n';
    return 0;
}