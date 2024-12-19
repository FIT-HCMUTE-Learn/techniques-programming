#include <bits/stdc++.h>

using namespace std;
vector <int32_t> inp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t tmp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> tmp; inp.push_back(tmp);
        }
    for (auto &x : inp) cout << x << " ";
    return 0;
}