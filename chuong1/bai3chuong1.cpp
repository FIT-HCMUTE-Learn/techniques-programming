#include <bits/stdc++.h>

using namespace std;
struct netive
{
    int32_t hour, minute, second;
};
netive one, two;

bool is_time(netive &a)
{
    if (0<=a.hour && a.hour<=23 
    && 0<=a.minute && a.minute<=59
    && 0<=a.second && a.second <=59)
        return true;
    else return false;
}

netive distance_time(netive &a, netive &b)
{
    int32_t one = a.hour*60*60 + a.minute*60 + a.second;
    int32_t two = b.hour*60*60 + b.minute*60 + b.second;
    int32_t tmp = abs(one - two);
    netive out;
    out.hour = tmp/3600; tmp %= 3600;
    out.minute = tmp/60; tmp %= 60;
    out.second = tmp;
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> one.hour >> one.minute >> one.second;
    cin >> two.hour >> two.minute >> two.second;
    if (is_time(one) && is_time(two))
    {
        netive result = distance_time(one, two);
        cout << result.hour << ":" << result.minute << ":" << result.second;
    }
    else cout << "ERROR!!!";
    return 0;
}