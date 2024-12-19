#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp, lsq, infront, out;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x; 
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    int32_t answer = 0;
    lsq.push_back(1);
    infront.push_back(0);
    for (int i = 1; i < n; i++){
        lsq.push_back(1); infront.push_back(i);
        for (int j = 0; j < i; j++){
            if (inp[j]<=inp[i] && lsq[j]+1>lsq[i]){
                lsq[i] = lsq[j]+1;
                infront[i] = j;
            }
        }
        answer = max(answer, lsq[i]);
    }
    cout << answer << '\n';
    int32_t run = n-1;
    while (lsq[run]!=answer) run--;
    while (answer--){
        out.push_back(inp[run]);
        run = infront[run];
    }
    reverse(out.begin(), out.end());
    for (auto it : out) cout << it << " ";
    return 0;
}