#include <bits/stdc++.h>

using namespace std;
struct netive
{
    int32_t day, month, year;
};
netive one, two;
int32_t day_in_month[15]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int32_t prefix[15];

bool is_leap(netive &a)
{
    if (a.month != 2) return false;
    if ((a.year%4 == 0 && a.year%100 != 0)
    || (a.year%100 == 0 && a.year%400 == 0))
        return true;
    return false;
}

bool is_time(netive &a)
{
    if (a.year<1 || a.month<1 || a.month>12 || a.day<1) return false;
    if (a.day > day_in_month[a.month-1]+is_leap(a)) return false;
    return true;
}

void make_prefix_sum_dayinmonth()
{
    prefix[0] = 0;
    for (int i = 1; i < 12; i++)
        prefix[i] = prefix[i-1]+day_in_month[i];
}

netive distance_time(netive &a, netive &b)
{
    int32_t one = (a.year-1)*365 + prefix[a.month-1] + a.day;
    int32_t two = (b.year-1)*365 + prefix[b.month-1] + b.day;
    int32_t tmp = abs(one-two);
    netive out;
    out.year = tmp/365; tmp %= 365;
    out.month = tmp/30; tmp %= 30;
    out.day = tmp;
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> one.day >> one.month >> one.year;
    cin >> two.day >> two.month >> two.year;
    if (is_time(one) && is_time(two))
    {
        make_prefix_sum_dayinmonth();
        netive result = distance_time(one, two);
        cout << result.year << ":" << result.month << ":" << result.day;
    } else cout << "ERROR!!!";
    return 0;
}