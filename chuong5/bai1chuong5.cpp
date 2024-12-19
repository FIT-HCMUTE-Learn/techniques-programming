#include <bits/stdc++.h>

using namespace std;
vector <string> out; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t tmp; string str;
    for (int i = 1; i <= n; i++){
        tmp = i; str = "";
        while (tmp != 0){
            str += char(int(tmp%2)+48);
            tmp /= 2;
        }
        reverse(str.begin(), str.end());
        out.push_back(str);
    }
    for (auto x : out) cout << x << '\n';
    return 0;
}