#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> even, odd;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t tmp;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp%2 == 0) even.push_back(tmp);
        else odd.push_back(tmp);
    }
    int32_t pivot = *max_element(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    auto it = lower_bound(odd.begin(), odd.end(), pivot);
    if (it != odd.end()) cout << *it << '\n';
    else cout << "NOT FIND!!!";
    return 0;
}