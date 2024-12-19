#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k; cin >> n >> k;
    int32_t tmp;
    int32_t address = -1; 
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == k && address == -1)
            address = i+1;
    }
    cout << address << '\n';
    return 0;
}