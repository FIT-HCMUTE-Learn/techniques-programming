#include <bits/stdc++.h>
#define maxarray 20

using namespace std; 
int32_t out[maxarray];

void print(int32_t n){
    for (int i = 1; i <= n; i++) cout << out[i];
    cout << '\n';
}

void Try(int32_t n, int32_t k){
    for (int i = 0; i < 2; i++){
        out[k] = i;
        if (k == n) print(n);
        else Try(n, k+1);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    Try(n, 1);
    return 0;
}