#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    string ansi = str;
    reverse(ansi.begin(), ansi.end());
    if (str == ansi) cout << "Palindrome!!!";
    else cout << "Not Palindrome!!!";
    return 0;
}