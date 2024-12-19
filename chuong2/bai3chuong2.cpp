#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    char key; cin >> key;
    int32_t pos; cin >> pos;
    cout << str + key << '\n';
    str.erase(str.begin());
    cout << str << '\n';
    str.insert(str.begin()+pos-1, key);
    cout << str << '\n';
    int32_t address = -1;
    for (int i = 0; i < str.size() && address == -1; i++)
        if (str[i] == key) address = i+1;
    cout << "Pos of key: " << address << '\n';
    return 0;
}