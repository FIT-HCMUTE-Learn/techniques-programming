#include <bits/stdc++.h>

using namespace std;
struct cmp{
    bool operator() (int32_t a, int32_t b) {return a > b;}
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    multiset <int32_t, cmp> inp;
    int32_t tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp; inp.insert(tmp);
    }
    int32_t x; cin >> x; inp.insert(x);
    multiset <int32_t, cmp> :: iterator it;
    for (it = inp.begin(); it != inp.end(); it++) 
        cout << *it << " ";
    return 0;
}