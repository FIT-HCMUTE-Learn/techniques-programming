#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    double result = 0;
    int64_t power = 1;
    for (int i = 1; i <= n; i++)
    {
        power *= int64_t(i);
        result += (1.0/power);
    }
    cout << fixed << setprecision(9) << result;
    return 0;
}