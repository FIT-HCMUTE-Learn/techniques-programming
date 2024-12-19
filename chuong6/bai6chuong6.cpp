#include <bits/stdc++.h>
#define maxarray 10005

using namespace std;
vector <vector <int32_t>> out(maxarray); 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t infront; 
    cin >> infront;
    int32_t x, cnt;
    cnt = 1;
    out[cnt].push_back(infront);
    for (int i = 1; i < n; i++){
        cin >> x;
        if (x <= infront) cnt++;
        out[cnt].push_back(x);
        infront = x;
    }
    int32_t answer = 0;
    for (int i = 1; i <= cnt; i++){
        if (out[i].size()>1) answer++; 
    }
    cout << answer << '\n';
    for (int i = 1; i <= cnt; i++){
        if (out[i].size()>1){
            for (auto it : out[i]) cout << it << " ";
            cout << '\n';
        }
    }
    return 0;
}