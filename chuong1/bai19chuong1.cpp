#include <bits/stdc++.h>
#define limit 100

using namespace std;
vector <int32_t> inp;

int64_t Rand(int64_t l, int64_t h)
{
    return l + ((int64_t)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (int64_t)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (int64_t)rand() * (RAND_MAX + 1) +
                rand()) % (h - l + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ofstream foi ("SONGUYEN.INP");
    int32_t mx = 1e9; int32_t mi = -1e9;
    for (int i = 0; i < limit; i++)
    {
        inp.push_back(Rand(mi, mx));
        foi << inp.back() << " ";
    }
    ofstream feven ("SOCHAN.OUT");
    ofstream fodd ("SOLE.OUT");
    for (auto x : inp)
        if (x % 2 == 0) feven << x << " ";
        else fodd << x << " ";
    foi.close(); feven.close(); fodd.close();
    return 0;
}