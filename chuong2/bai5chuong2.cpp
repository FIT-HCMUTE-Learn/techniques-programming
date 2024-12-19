#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int32_t inp[maxarray][maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t tmp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> inp[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << inp[i][j] << " ";
        cout << '\n';
    }
    return 0;
}