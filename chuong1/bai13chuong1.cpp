#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct book{
    string ios, name, auther;
    int32_t amount;
} inp[maxarray];

int32_t book_search_name(book scan[], int32_t start, int32_t bsize, string str)
{
    for (int i = start; i < start+bsize; i++)
        if (scan[i].name == str) return i;
    return -1;
}

int32_t total_book(book scan[], int32_t start, int32_t bsize)
{
    int32_t out = 0;
    for (int i = start; i < start+bsize; i++)
        out += scan[i].amount;
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n; //cin.ignore(1);
    for (int i = 0; i < n; i++)
    {
        cin.ignore(1);
        getline(cin, inp[i].ios);
        getline(cin, inp[i].name);
        getline(cin, inp[i].auther);
        cin >> inp[i].amount;
    }
    string str; cin.ignore(1); getline(cin, str);
    //=== Filter by book'name
    cout << "\n=== Book's name: " << str << '\n';
    int32_t pos = book_search_name(inp, 0, n, str);
    if (pos == -1) cout << "Not found!!!\n";
    else
    {
        cout << "IOS: " << inp[pos].ios << '\n';
        cout << "Name: " << inp[pos].name << '\n';
        cout << "Auther: " << inp[pos].auther << '\n';
        cout << "Amount: " << inp[pos].amount << '\n';
        cout << "-----------------------\n";
    }
    cout << "Total number of book: " << total_book(inp, 0, n);
    return 0;
}