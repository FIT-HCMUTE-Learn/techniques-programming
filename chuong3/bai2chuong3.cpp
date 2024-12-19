#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t result, plus;
    result = plus = 0;
    for (int i = 1; i <= n; i++)
    {
        plus += i; result += plus;
    }
    cout << result;
    return 0;
}