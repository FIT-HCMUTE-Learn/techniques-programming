#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct comp_num{
    int64_t real, comp;
};
comp_num inp[maxarray];

comp_num comp_plus_array(comp_num scan[], int32_t start, int32_t csize)
{
    comp_num out; out.real = out.comp = 0;
    for (int i = start; i < start+csize; i++)
    { out.real += scan[i].real; out.comp += scan[i].comp; }
    return out;
}

comp_num comp_multi_array(comp_num scan[], int32_t start, int32_t csize)
{
    comp_num out; out.real = out.comp = 1;
    for (int i = start; i < start+csize; i++)
    { 
        out.real = out.real*out.comp-scan[i].real*scan[i].comp;
        out.comp = out.real*scan[i].comp+out.comp*scan[i].real; 
    }
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> inp[i].real >> inp[i].comp;
    comp_num num;
    num = comp_plus_array(inp, 0, n);
    cout << "Total array of complex numbers: " << num.real;
    (num.comp < 0)?(cout << num.comp):(cout << "+" << num.comp);
    cout << "i\n";

    num = comp_multi_array(inp, 0, n);
    cout << "Array product of complex numbers: " << num.real;
    (num.comp < 0)?(cout << num.comp):(cout << "+" << num.comp);
    cout << "i\n";

    return 0;
}