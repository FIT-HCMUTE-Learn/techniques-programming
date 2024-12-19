#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    string tmp = "";
    int32_t plus, x; plus = 0;
    for (int i = 0; i < str.size(); i++){
        if ('0' <= str[i] && str[i] <= '9'){
            tmp += str[i];
        } else if (tmp.size()) {
                    x = stoi(tmp);
                    plus += x; tmp = "";
                }
    }
    cout << plus << '\n';
    return 0;
}