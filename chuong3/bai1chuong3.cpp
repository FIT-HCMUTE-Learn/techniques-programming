#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double x; cin >> x;
    int32_t n; cin >> n;
    cout << fixed << setprecision(9) << pow(x, n);
    return 0;
}