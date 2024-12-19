#include <bits/stdc++.h>
#define maxarray 1005

using namespace std; 
int32_t uni[maxarray][maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    int32_t m, n;
    m = str.size(); n = ansi.size();
    for (int i = 0; i <= m; i++) uni[i][0] = 0;
    for (int j = 0; j <= n; j++) uni[0][j] = 0;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (str[i-1]==ansi[j-1]) uni[i][j] = uni[i-1][j-1]+1;
            else uni[i][j] = max(uni[i-1][j], uni[i][j-1]);
        }
    }
    int32_t answer = uni[m][n];
    cout << answer << '\n';
    int32_t i, j;
    string out = "";
    i = m; j = n;
    while (i>0 && j>0){
        if (str[i-1]==ansi[j-1]){
            out += str[i-1]; i--; j--;
        }
        else{
            if (uni[i-1][j] > uni[i][j-1]) i--;
            else j--;
        }
    }
    reverse(out.begin(), out.end());
    cout << out;
    return 0;
}