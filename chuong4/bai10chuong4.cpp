#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    map <int32_t, int32_t> mp;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x]++;
    }
    int32_t cnt = 0;
    int32_t answer;
    for (auto it : mp){
        if (it.second > cnt){
            cnt = it.second; 
            answer = it.first;
        }
    }
    cout << answer;
    return 0;
}