#include <bits/stdc++.h>
#define maxarray 105

using namespace std; 
vector <vector<int32_t>> matrix(maxarray), comtrix(maxarray);
vector <vector<int32_t>> tick(maxarray);

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t tmp; 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> tmp; matrix[i].push_back(tmp);
            tick[i].push_back(0); 
        }
    }
    for (int j = 0; j < m; j++)
        for (int i = 0; i < n; i++){
            comtrix[j].push_back(matrix[i][j]);
        }
    int32_t pos;
    for (int i = 0; i < n; i++){
        pos = max_element(matrix[i].begin(), matrix[i].end())-matrix[i].begin();
        tick[i][pos]++;
    }
    for (int j = 0; j < m; j++){
        pos = min_element(comtrix[j].begin(), comtrix[j].end())-comtrix[j].begin();
        tick[pos][j]++;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            if (tick[i][j] == 2) cout << matrix[i][j] << " ";
        }
    return 0;
}