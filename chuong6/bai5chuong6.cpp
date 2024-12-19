#include <bits/stdc++.h>
#define maxarray 15

using namespace std; 
int32_t a[maxarray][maxarray], b[maxarray][maxarray];
int32_t c[maxarray][maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t m, n, p; cin >> m >> n >> p;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < p; j++){
            cin >> b[i][j];
        }
    }
    int32_t x;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            x = 0;
            for (int t = 0; t < n; t++){
                x += a[i][t]*b[t][j];
            }
            c[i][j] = x;
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}