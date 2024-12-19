#include <bits/stdc++.h>

using namespace std; 

int32_t bit_count(string str, char key){
    int32_t cnt = 0;
    for (auto x : str){
        if (x == key) cnt++;
    }
    return cnt;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str = "";
    while (n){
        str += char(int(n%2)+48);
        n /= 2;
    }
    reverse(str.begin(), str.end());
    cout << bit_count(str, '1') << '\n';
    return 0;
}