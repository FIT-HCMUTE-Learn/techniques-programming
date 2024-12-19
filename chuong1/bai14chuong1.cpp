#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct computer{
    string genre, manu;
    int32_t gua;
} inp[maxarray];
string pattern = "america";

int32_t computer_gua(computer scan[], int32_t start, int32_t csize)
{
    int32_t cnt = 0;
    for (int i = start; i < start+csize; i++)
        if (scan[i].gua == 1) cnt++;
    return cnt;
}
int32_t computer_manu(computer scan[], int32_t start, int32_t csize)
{
    int32_t cnt = 0;
    for (int i = start; i < start+csize; i++)
        if (scan[i].manu == pattern) cnt++;
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore(1);
        getline(cin, inp[i].genre);
        getline(cin, inp[i].manu);
        cin >> inp[i].gua;
    }
    cout << "One year warranty period: " << computer_gua(inp, 0, n) << '\n';
    cout << "Originated from USA: " << computer_manu(inp, 0, n) << '\n';
    return 0;
}