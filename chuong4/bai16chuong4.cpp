#include <bits/stdc++.h>
#define maxarray 20

using namespace std; 
int32_t arr[maxarray][maxarray];
vector <int32_t> inp, scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    for (int i = 0; i < n; i++) 
        inp.push_back(i);
    int32_t answer, plus;
    answer = 1e9;
    do
    {
        scan.clear(); scan.push_back(0);
        for (int i = 1; i < n; i++)
            scan.push_back(inp[i]);
        scan.push_back(0); plus = 0;
        for (int i = 0; i < n; i++)
            plus += arr[scan[i]][scan[i+1]];
        answer = min(answer, plus);
    } while (next_permutation(inp.begin(), inp.end()));
    cout << answer << '\n';
    return 0;
}