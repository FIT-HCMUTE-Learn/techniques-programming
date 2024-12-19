#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int32_t dx[9] = {-1, -1, 0, 1, 1, 1, 0, -1};
int32_t dy[9] = {0, -1, -1, -1, 0, 1, 1, 1};
char scan[maxarray][maxarray];
vector <pair<int32_t, int32_t>> bom;

int get_rand(int min,int max){
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t mine = get_rand((n+m + n/10+m/10), 2*n*m/3);
    for (int i = 0; i < n+2; i++)
        for (int j = 0; j < m+2; j++)
            scan[i][j] = '0';
    int32_t x, y;
    for (int i = 0; i < mine; i++)
    {
        x = get_rand(1, n); y = get_rand(1, m);
        if (scan[x][y] == '0') 
        {
            scan[x][y] = '_';
            bom.push_back({x, y});
        }
    }
    char key;
    for (auto &it : bom)
    {
        x = it.first; y = it.second;
        for (int i = 0; i < 8; i++)
        {
            key = scan[x+dx[i]][y+dy[i]];
            if (key != '_') scan[x+dx[i]][y+dy[i]] = char(int(key)+1);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << scan[i][j] << " ";
        cout << '\n';
    }
    return 0;
}