#include <bits/stdc++.h>

using namespace std;
struct mixed{
    int64_t infront, up, down;
};
struct fraction{
    int64_t up, down;
};

fraction mixed_convert(mixed &a)
{
    fraction out;
    out.up = a.infront*a.down+a.up;
    out.down = a.down;
    return out;
}

mixed mixed_plus(mixed &a, mixed &b)
{
    fraction one, two;
    one = mixed_convert(a); 
    two = mixed_convert(b);
    int64_t x = one.up*two.down+two.up*one.down;
    int64_t y = one.down*two.down;
    int64_t tmp = __gcd(x, y);
    x /= tmp; y /= tmp;
    mixed out;
    out.infront = x/y;
    out.up = x%y;
    out.down = y;
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    mixed one, two;
    cin >> one.infront >> one.up >> one.down;
    cin >> two.infront >> two.up >> two.down;

    fraction num;
    num = mixed_convert(one);
    cout << "Convert mixed numbers to fraction A: " << num.up << "/" << num.down << '\n';
    num = mixed_convert(two);
    cout << "Convert mixed numbers to fraction B: " << num.up << "/" << num.down << '\n';

    mixed result = mixed_plus(one, two);
    cout << "Mixed numbers plus: " << result.infront << " " << result.up << "/" << result.down;
    return 0;
}