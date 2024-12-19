#include <bits/stdc++.h>

using namespace std;

void output(vector <string> &out)
{
    for (auto &x : out) cout << x;
    cout << '\n';
}

void str_plus(string str, string ansi)
{
    vector <string> summation;
    int32_t limit = max(str.size(), ansi.size());
    while (str.size() < limit) str.insert(str.begin(), '0');
    while (ansi.size() < limit) ansi.insert(ansi.begin(), '0');
    int32_t res, plus;
    res = 0; 
    for (int i = limit-1; i > 0; i--)
    {
        plus = int(str[i])+int(ansi[i])-2*48 + res;
        summation.push_back(to_string(plus % 10));
        res = plus/10;
    }
    summation.push_back(to_string(int(str[0])+int(ansi[0])-2*48 + res));
    reverse(summation.begin(), summation.end());
    output(summation);
}

void str_subtrac(string str, string ansi)
{
    vector <string> subtraction;
    int32_t limit = max(str.size(), ansi.size());
    while (str.size() < limit) str.insert(str.begin(), '0');
    while (ansi.size() < limit) ansi.insert(ansi.begin(), '0');
    int32_t res, subtrac, up;
    string oper;
    res = 0;
    if (str < ansi)
    {
        swap(str, ansi); oper = "-"; 
    } else oper = "";
    for (int i = limit-1; i > 0; i--)
    {
        up = (str[i]+res < ansi[i])?(1):(0);
        subtrac = (int(str[i])-48+res + up*10) - (int(ansi[i])-48); 
        subtraction.push_back(to_string(subtrac));
        if (up == 1) res = -1; else res = 0;
    }
    up = (str[0]+res < ansi[0])?(1):(0);
    subtrac = (int(str[0])-48+res + up*10) - (int(ansi[0])-48); 
    if (subtrac) subtraction.push_back(to_string(subtrac));
    subtraction.push_back(oper);
    reverse(subtraction.begin(), subtraction.end());
    output(subtraction);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str, ansi; cin >> str >> ansi;
    str_plus(str, ansi);
    str_subtrac(str, ansi);
    return 0;
}