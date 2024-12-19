#include <bits/stdc++.h>

using namespace std;
int64_t n, i;
string BIN, OCT, HEX;

string Binary (int64_t n)
{
    int64_t i, tmp;
    string str, ansi;
    str = "";
    while (n != 0)
    {
        tmp = n % 2;
        ansi = to_string(tmp);
        str = str + ansi;
        n = n / 2;
    }
    ansi = "";
    for (i = 0; i < str.length(); i++)
        ansi = ansi + str[str.length() - i - 1];
    return ansi;
}

string Octal (int64_t n)
{
    int64_t i, tmp;
    string str, ansi;
    str = "";
    while (n != 0)
    {
        tmp = n % 8;
        ansi = to_string(tmp);
        str = str + ansi;
        n = n / 8;
    }
    ansi = "";
    for(i = 0; i < str.length(); i++)
        ansi = ansi + str[str.length() - i - 1];
    return ansi;
}

string Hexdecimal (int64_t n)
{
    int64_t i, tmp;
    string str, ansi;
    str = "";
    while (n != 0)
    {
        tmp = n % 16;
        if (tmp <= 9)
            ansi = to_string(tmp);
        else
        switch (tmp)
        {
            case 10: ansi = "A"; break;
            case 11: ansi = "B"; break;
            case 12: ansi = "C"; break;
            case 13: ansi = "D"; break;
            case 14: ansi = "E"; break;
            case 15: ansi = "F"; break;
        }
        str = str + ansi;
        n = n / 16;
    }
    ansi = "";
    for (i = 0; i < str.length(); i++)
        ansi = ansi + str[str.length() - i -1];
    return ansi;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    BIN = Binary(n);
    OCT = Octal(n);
    HEX = Hexdecimal(n);
    cout << BIN << '\n';
    cout << OCT << '\n';
    cout << HEX;
    return 0;
}
