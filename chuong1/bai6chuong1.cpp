#include <bits/stdc++.h>

using namespace std;
struct fraction{
    int64_t up, down;
};
struct double_frac{
    fraction fa, fb;
};

fraction frac_simple(fraction a)
{
    int64_t tmp = __gcd(a.up, a.down);
    a.up /= tmp; a.down /= tmp;
    return a;
}

fraction frac_plus(fraction a, fraction b)
{
    fraction out;
    out.up = a.up*b.down+b.up*a.down;
    out.down = a.down*b.down;
    return out;
}

fraction frac_subtrac(fraction a, fraction b)
{
    fraction out;
    out.up = a.up*b.down-b.up*a.down;
    out.down = a.down*b.down;
    return out;
}

fraction frac_multi(fraction a, fraction b)
{
    fraction out;
    out.up = a.up*b.up;
    out.down = a.down*b.down;
    return out;
}

fraction frac_div(fraction a, fraction b)
{
    fraction out;
    out.up = a.up*b.down;
    out.down = a.down*b.up;
    return out;
}

fraction frac_max(fraction a, fraction b)
{
    if (a.up*1.0/a.down > b.up*10/b.down)
        return a;
    else return b;
}

fraction frac_min(fraction a, fraction b)
{
    if (a.up*1.0/a.down < b.up*10/b.down)
        return a;
    else return b;
}

double_frac frac_equal(fraction a, fraction b)
{
    double_frac out; fraction x, y;
    x.down = y.down = a.down*b.down;
    x.up = a.up*b.down;
    y.up = b.up*a.down;
    out.fa = x; out.fb = y;
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    fraction one, two;
    cin >> one.up >> one.down;
    cin >> two.up >> two.down;

    fraction num;
    num = frac_simple(one);
    cout << "Fraction simple A: " << num.up << "/" << num.down << '\n';
    num = frac_simple(two);
    cout << "Fraction simple B: " << num.up << "/" << num.down << '\n';

    double_frac equal; fraction x, y;
    equal = frac_equal(one, two); x = equal.fa; y = equal.fb;
    cout << "Fraction equal A: " << x.up << "/" << x.down << '\n';
    cout << "Fraction equal B: " << y.up << "/" << y.down << '\n';

    num = frac_plus(one, two); num = frac_simple(num);
    cout << "Fraction plus: " << num.up << "/" << num.down << '\n';
    num = frac_subtrac(one, two); num = frac_simple(num);
    cout << "Fraction subtraction: " << num.up << "/" << num.down << '\n';
    num = frac_multi(one, two); num = frac_simple(num);
    cout << "Fraction multiplization: " << num.up << "/" << num.down << '\n';
    if (two.up == 0) cout << "ERROR!!!\n";
    else
    {
        num = frac_div(one, two); num = frac_simple(num);
        cout << "Fraction division: " << num.up << "/" << num.down << '\n';
    }

    num = frac_max(one, two);
    cout << "Fraction maximum: " << num.up << "/" << num.down << '\n';
    num = frac_min(one, two);
    cout << "Fraction minimum: " << num.up << "/" << num.down << '\n';

    return 0;
}