#include <bits/stdc++.h>

using namespace std; 
int bit[20];

void print(int32_t limit){
    for (int i = 1; i <= limit; i++)
        cout << bit[i];
    cout << '\n';
}

void Try(int32_t n, int32_t k){
    for (int i = 0; i < 2; i++){
        bit[k] = i;
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