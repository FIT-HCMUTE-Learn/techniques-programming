#include <bits/stdc++.h>

using namespace std;
int32_t dim[16] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool is_(int32_t month, int32_t year)
{
    bool res;
    if ((year%4 == 0 && year%100 != 0)
    || (year%100 == 0 && year%400 == 0)) 
        res = true; else res = false;
    res = (month == 2)?(res):(false);
    return res;
}

bool check(int32_t d, int32_t m, int32_t y)
{
    if (y < 1 || m < 1 || m > 12 || d < 1 || d > 31)
        return false;
    else if (d > dim[m-1]+is_(m, y)) return false;
        else return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t day, month, year;
    cin >> day >> month >> year;
    if (!check(day, month, year)) cout << "NO\n";
    else
    {
        int32_t res = is_(month, year); 
        int32_t pivot = dim[month-1] + res;
        //cout << pivot << '\n';
        if (day > pivot)
            cout << "NO\n";
        else
        {
            day++; 
            if (day > pivot) { day = 1; month++; }
            if (month > 12) {month = 1; year++; }
            cout << day << "/" << month << "/" << year;
        }
    }
    return 0;
}