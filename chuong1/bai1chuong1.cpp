#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
struct student
{
    string code, name, birth, address, sex;
    double avg_sorce;
} inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t cnt = 0; 
    for (int i = 0; i < n; i++)
    {
        cin.ignore(1); getline(cin, inp[i].code); 
        getline(cin, inp[i].name);
        getline(cin, inp[i].birth); 
        getline(cin, inp[i].address);
        getline(cin, inp[i].sex); 
        cin >> inp[i].avg_sorce;
        if (inp[i].avg_sorce >= 5.0) cnt++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Student code: " << inp[i].code << '\n';
        cout << "Full name: " << inp[i].name << '\n';
        cout << "Birthday: " << inp[i].birth << '\n';
        cout << "Address: " << inp[i].address << '\n';
        cout << "Sex: " << inp[i].sex << '\n';
        cout << "Medium sorce: " << fixed << setprecision(2) << inp[i].avg_sorce << '\n';
        cout << "----------------------------------------------------\n";
    }
    cout << "Up: " << cnt << " student";
    if (cnt > 1) cout << "s";
    return 0;
}