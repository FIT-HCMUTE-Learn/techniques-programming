#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, pos; cin >> n >> pos;
    string str = "";
    while (n){
        str += char(int(n%2)+48);
        n /= 2;
    }
    reverse(str.begin(), str.end());
    if (pos >= str.size()) cout << "NO SOLUTION!!!";
    else{
        cout << str << '\n';
        cout << "BIT with pos = " << pos << ": " << str[str.size()-pos-1] << '\n';
        str[str.size()-pos-1] = '1';
        cout << "ON: " << str << '\n';
        str[str.size()-pos-1] = '0';
        cout << "OFF: " << str << '\n';
    }
    return 0;
}