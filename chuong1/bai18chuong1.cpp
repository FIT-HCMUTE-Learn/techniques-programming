#include <bits/stdc++.h>
#define limit 10000

using namespace std;
set <int32_t> st;
vector <int32_t> out;

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
    ofstream fout ("SONGUYEN.INP");
    int32_t mx = 32767;
    int32_t mi = 1;
    int32_t sts, tmp;
    while (st.size() < limit)
    {
        sts = st.size(); tmp = Rand(mi, mx);
        st.insert(tmp);
        if (sts != st.size()) out.push_back(tmp);
    }
    for (auto x : out) fout << x << " ";
    return 0;
}