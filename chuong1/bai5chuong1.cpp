#include <bits/stdc++.h>

using namespace std;
struct netive
{
    double real, comp;
};
netive one, two;

netive comp_plus(netive &a, netive &b)
{
    netive out;
    out.real = a.real+b.real;
    out.comp = a.comp+b.comp;
    return out;
}

netive comp_subtrac(netive &a, netive &b)
{
    netive out;
    out.real = a.real-b.real;
    out.comp = a.comp-b.comp;
    return out;
}

netive comp_multip(netive &a, netive &b)
{
    netive out;
    out.real = a.real*a.comp-b.real*b.comp;
    out.comp = a.real*b.comp+a.comp*b.real;
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> one.real >> one.comp;
    cin >> two.real >> two.comp;

    netive num;
    num = comp_plus(one, two);
    cout << "Plus complex numbers: " << num.real << " " << num.comp << "i" << '\n';

    num = comp_subtrac(one, two);
    cout << "Subtraction complex numbers: " << num.real << " " << num.comp << "i" << '\n';

    num = comp_multip(one, two);
    cout << "Multiplication complex numbers: " << num.real << " " << num.comp << "i" << '\n';
    return 0;
}