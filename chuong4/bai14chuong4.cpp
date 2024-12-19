
#include <bits/stdc++.h>
#define maxarray 8
using namespace std;
int32_t arr[maxarray][maxarray] = {0};
int32_t X[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int32_t Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};
int32_t cnt = 0;
int32_t n;
 
void out() {
    for (int32_t i = 0; i < n; i++) {
        for (int32_t j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
    cout << '\n';
}
 
void move(int32_t x, int32_t y){
    cnt++;
    arr[x][y] = cnt;
    for (int32_t i = 0; i < 8; i++) {
        if (cnt == n*n){
            out(); exit(0);
        }
        int32_t u = x + X[i];
        int32_t v = y + Y[i];
        if (u >= 0 && u < n && v >= 0 && v < n && arr[u][v] == 0)
            move(u, v);
    }
    cnt--;
    arr[x][y] = 0;
}
int32_t main()
{
    cin >> n;
    int32_t a, b; 
    cin >> a >> b;
    move(a, b);
    cout << "No Solution!";
    return 0;
}