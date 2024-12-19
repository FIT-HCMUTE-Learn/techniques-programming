#include <bits/stdc++.h>

using namespace std; 

bool is_prime(int32_t num){
    if (num < 2) return false;
    int32_t i = 2;
    while (i <= round(sqrt(num)))
        if (num%i == 0) return false;
        else i++;
    return true;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    vector <bool> eratos(n+1, true);
    eratos[0] = eratos[1] = false;
    for (int i = 2; i*i <= n; i++){
        if (is_prime(i)){
            for (int j = 2*i; j <= n; j += i)
                eratos[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
        if (eratos[i]) cout << i << " ";
    return 0;
}