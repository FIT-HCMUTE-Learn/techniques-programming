#include <bits/stdc++.h>
#define inf 1e9
#define maxarray 1005

using namespace std;
double inp[maxarray][maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t m, n; cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> inp[i][j];
    for (int i = 0; i <= m+1; i++)
        inp[i][0] = inp[i][n+1] = -inf*1.0;
    for (int j = 0; j <= n+1; j++)
        inp[0][j] = inp[m+1][j] = -inf*1.0;
    double val;
    int32_t row, col;
    val = double(inf*1.0); 
    col = row = -1;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (inp[i][j] > inp[i-1][j] && inp[i][j] > inp[i+1][j]
            && inp[i][j] > inp[i][j-1] && inp[i][j] > inp[i][j+1])
            {
                if (inp[i][j] < val)
                { row = i-1; col = j-1; val = inp[i][j]; }
            }
    if (col == -1) cout << "-1\n";
    else cout << row << " " << col << '\n';
    return 0;
}