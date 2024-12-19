#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    double x; cin >> x;
    double up = 1;
    int64_t down = 1;
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        up *= x; down *= int64_t(i);
        result += up/down;
    }
    cout << fixed<< setprecision(9) << result;
    return 0;
}