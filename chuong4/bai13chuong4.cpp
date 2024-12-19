#include <bits/stdc++.h>
#define maxarray 20

using namespace std; 
int32_t out[maxarray];
bool tick[maxarray];
vector <int32_t> inp;

void print(int32_t n){
    for (int i = 1; i <= n; i++)
        cout << inp[out[i]-1] << " ";
    cout << '\n';
}

void Try(int32_t n, int32_t k){
    for (int i = 1; i <= n; i++)
        if (!tick[i]){
            out[k] = i;
            tick[i] = true;
            if (k == n) print(n);
            else Try(n, k+1);
            tick[i] = false;
        }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    fill(tick, tick + n+1, false);
    Try(n, 1);
    return 0;
}