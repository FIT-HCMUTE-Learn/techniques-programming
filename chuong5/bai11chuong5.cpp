#include <bits/stdc++.h>

using namespace std; 
int32_t index[25];
bool tick[25];
vector <int32_t> inp;

void print(int32_t limit){
    for (int i = 1; i <= limit; i++)
        cout << inp[index[i]-1] << " ";
    cout << '\n';
}

void Try(int32_t pivot, int32_t n, int32_t k){
    for (int i = index[k-1]+1; i <= pivot; i++){
        if (!tick[i]){
            index[k] = i;
            tick[i] = true;
            if (k == n) print(n);
            else Try(pivot, n, k+1);
            tick[i] = false;
        }
    }
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
    for (int i = 0; i <= n; i++){
        fill(tick, tick+n+1, false);
        index[0] = 0;
        Try(n, i, 1);
    }
    return 0;
}