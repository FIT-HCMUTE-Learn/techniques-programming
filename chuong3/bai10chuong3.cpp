#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; getline(cin, str);
    vector <char> up, down, num, non;
    for (auto x : str){
        if ('a' <= x && x <= 'z') down.push_back(x);
        else if ('A' <= x && x <= 'Z') up.push_back(x);
            else if ('0' <= x && x <= '9') num.push_back(x);
                else non.push_back(x);
    }
    for (auto x : up) cout << x << " "; cout << '\n';
    for (auto x : down) cout << x << " "; cout << '\n';
    for (auto x : num) cout << x << " "; cout << '\n';
    for (auto x : non) cout << x << " ";
    return 0;
}