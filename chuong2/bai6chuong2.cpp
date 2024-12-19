#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int32_t a[maxarray], b[maxarray];
vector <int32_t> out;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++)
    { out.push_back(a[i]); out.push_back(b[i]); }
    for (auto &x : out) cout << x << " ";
    return 0;
}