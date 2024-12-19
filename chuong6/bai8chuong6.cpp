#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
int32_t pascal[maxarray][maxarray]; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    pascal[0][0] = 1;
    pascal[1][0] = pascal[1][1] = 1;
    for (int i = 2; i <= n; i++){
        pascal[i][0] = 1;
        for (int j = 1; j < i; j++){
            pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
        }
        pascal[i][i] = 1;
    }
    for (int i = 0; i <= n; i++){
        for (int j = 0; j < i+1; j++){
            cout << pascal[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}