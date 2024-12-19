#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    double result, plus;
    plus = result = 0;
    for (int i = 1; i <= n; i++)
    {
        plus += i; result += (1.0/plus);
    }
    cout << fixed << setprecision(9) << result;
    return 0;
}