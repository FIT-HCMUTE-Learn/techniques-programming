#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

bool is_prime(int32_t num){
    if (num < 2) return false;
    int32_t i = 2;
    while (i <= round(sqrt(num)))
        if (num % i == 0) return false;
        else i++;
    return true;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp; inp.push_back(tmp);
    }
    sort(inp.begin(), inp.end());
    for (int i = 0; i < n; i++){
        if (is_prime(inp[i])){
            cout << inp[i] << '\n';
            break;
        }
    }
    return 0;
}