#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double a; cin >> a;
    double plus = 0;
    int32_t n = 1;
    while (plus <= a){
        plus += 1.0/n; n++;
    }
    cout << n-1;
    return 0;
}