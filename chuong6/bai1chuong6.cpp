#include <bits/stdc++.h>

using namespace std; 

void print_bina(int32_t num){
    stack <int32_t> sta;
    while (num != 0){
        sta.push(num%2);
        num /= 2;
    }
    while (sta.size()){
        cout << sta.top();
        sta.pop();
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++){
        print_bina(i);
        cout << '\n';
    }
    return 0;
}