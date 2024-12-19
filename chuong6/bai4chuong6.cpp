#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    set <int32_t> st;
    for (int i = 0; i < n; i++){
        cin >> x; st.insert(x);
    }
    for (auto it : st){
        cout << it << " ";
    }
    return 0;
}