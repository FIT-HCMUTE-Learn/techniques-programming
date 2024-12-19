#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t result, power;
    result = 0; power = 1;
    for (int i = 1; i <= n; i++)
    {
        power *= int64_t(i);
        result += power;
    }
    cout << result;
    return 0;
}