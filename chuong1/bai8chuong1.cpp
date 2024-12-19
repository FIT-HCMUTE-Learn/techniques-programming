#include <bits/stdc++.h>

using namespace std;
struct descart{
    int32_t x, y;
};

descart sym_jux(descart &a)
{
    descart out;
    out.x = -a.x; out.y = a.y;
    return out;
}
descart sym_dia(descart &a)
{
    descart out;
    out.x = a.x; out.y = -a.y;
    return out;
}
descart sym_zero(descart &a)
{
    descart out;
    out.x = -a.x; out.y = -a.y;
    return out;
}
double distan(descart &a, descart &b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    descart one, two;
    cin >> one.x >> one.y;
    cin >> two.x >> two.y;

    descart num;
    cout << "=== Symmetry of A:\n";
    num = sym_jux(one);
    cout << "Symmetric about the vertical axis: " << num.x << " " << num.y << '\n';
    num = sym_dia(one);
    cout << "Symmetrical about the horizontal axis: " << num.x << " " << num.y << '\n';
    num = sym_zero(one);
    cout << "Symmetry about the origin: " << num.x << " " << num.y << '\n';

    cout << "=== Symmetry of B:\n";
    num = sym_jux(two);
    cout << "Symmetric about the vertical axis: " << num.x << " " << num.y << '\n';
    num = sym_dia(two);
    cout << "Symmetrical about the horizontal axis: " << num.x << " " << num.y << '\n';
    num = sym_zero(two);
    cout << "Symmetry about the origin: " << num.x << " " << num.y << '\n';

    cout << "=== Distance: " << fixed << setprecision(9) << distan(one, two) << '\n';
    return 0;
}