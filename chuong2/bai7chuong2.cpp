#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; getline(cin, str);
    int32_t i;
    while (!str.empty() && str[0] == ' ') str.erase(str.begin());
    while (!str.empty() && str.back() == ' ') str.erase(str.begin()+str.size()-1);
    i = 1;
    while (i < str.size())
    {
        if (str[i] == ' ' && str[i+1] == ' ')
            str.erase(str.begin()+i);
        else i++;
    }
    str[0] = toupper(str[0]); 
    i = 1;
    while (i < str.size())
    {
        if (str[i] == ' ') 
        {
            str[i+1] = toupper(str[i+1]); i++;
        }
        else str[i] = tolower(str[i]);
        i++;
    }
    cout << str;
    return 0;
}