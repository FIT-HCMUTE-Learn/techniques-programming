#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
struct fraction
{
    int64_t up, down;
};
fraction inp[maxarray];

bool comp_frac(fraction a, fraction b)
{
    return ((a.up*1.0)/a.down < (b.up*1.0)/b.down);
}

fraction frac_simple(fraction a)
{
    int64_t tmp = __gcd(a.up, a.down);
    a.up /= tmp; a.down /= tmp;
    return a;
}
fraction frac_plus(fraction a, fraction b)
{
    fraction out;
    out.up = a.up*b.down + b.up*a.down;
    out.down = a.down*b.down;
    return out;
}

fraction max_fraction_array(fraction scan[maxarray], int32_t start, int32_t frsize)
{
    int32_t pos = start; 
    double maxx = scan[start].up*1.0/scan[start].down;
    double calc;
    for (int i = start+1; i < start+frsize; i++)
    {
        calc = scan[i].up*1.0/scan[i].down;
        if (calc > maxx)
        { maxx = calc; pos = i; }
    }
    return scan[pos];
}

fraction min_fraction_array(fraction scan[maxarray], int32_t start, int32_t frsize)
{
    int32_t pos = start; 
    double maxx = scan[start].up*1.0/scan[start].down;
    double calc;
    for (int i = start+1; i < start+frsize; i++)
    {
        calc = scan[i].up*1.0/scan[i].down;
        if (calc < maxx)
        { maxx = calc; pos = i; }
    }
    return scan[pos];
}

fraction plus_fraction_array(fraction scan[maxarray], int32_t start, int32_t frsize)
{
    fraction result = scan[start];
    for (int i = start+1; i < start+frsize; i++)
    {
        result = frac_plus(result, scan[i]);
        result = frac_simple(result);
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> inp[i].up >> inp[i].down;

    fraction result;
    result = max_fraction_array(inp, 0, n);
    cout << "Max fraction: " << result.up << "/" << result.down << '\n';

    result = min_fraction_array(inp, 0, n);
    cout << "Min fraction: " << result.up << "/" << result.down << '\n';

    result = plus_fraction_array(inp, 0, n);
    result = frac_simple(result);
    cout << "Plus fraction: " << result.up << "/" << result.down << '\n';

    sort(inp, inp+n, comp_frac);
    cout << "Fraction array sorted: \n";
    for (int i = 0; i < n; i++)
        cout << inp[i].up << "/" << inp[i].down << " ";
    return 0;
}