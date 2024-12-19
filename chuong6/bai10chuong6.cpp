#include <bits/stdc++.h>

using namespace std; 
vector <string> out;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; getline(cin, str);
    string ansi = "";
    int i = 0; str += ' ';
    while (i < str.size()){
        if (str[i] != ' '){
            ansi += str[i]; i++;
        }
        else{
            if (ansi.size()){
                out.push_back(ansi);
                ansi = "";
            }
            while (str[i]==' ' && i<str.size()) i++;
        }
    }
    for (auto it : out){
        ansi = it;
        reverse(ansi.begin(), ansi.end());
        cout << ansi << '\n';
    }
    return 0;
}