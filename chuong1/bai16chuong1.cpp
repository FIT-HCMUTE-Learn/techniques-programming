#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct product{
    string code, name;
    int32_t amount, cost, res, gua;
} inp[maxarray];
struct filter{
    vector <product> fil;
};

bool product_comp_res(product a, product b){
    return (a.res < b.res);
}

product product_max_res(product scan[], int32_t start, int32_t prosize)
{
    product out = scan[start];
    for (int i = start; i < start+prosize; i++)
        if (out.res < scan[i].res) out = scan[i];
    return out;
}
product product_min_res(product scan[], int32_t start, int32_t prosize)
{
    product out = scan[start];
    for (int i = start; i < start+prosize; i++)
        if (out.res > scan[i].res) out = scan[i];
    return out;
}
product product_max_cost(product scan[], int32_t start, int32_t prosize)
{
    product out = scan[start];
    for (int i = start; i < start+prosize; i++)
        if (out.cost < scan[i].cost) out = scan[i];
    return out;
}

filter product_filter_gua(product scan[], int32_t start, int32_t prosize, int32_t key)
{
    vector <product> save;
    for (int i = start; i < start+prosize; i++)
        if (scan[i].gua > key) save.push_back(scan[i]);
    filter out; out.fil = save;
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore(1);
        getline(cin, inp[i].code);
        getline(cin, inp[i].name);
        cin >> inp[i].amount >> inp[i].cost;
        cin >> inp[i].res >> inp[i].gua;
    }
    product result;
    //=== Products with the most stock
    result = product_max_res(inp, 0, n);
    cout << "\n=== Products with the most stock\n";
    cout << "Code: " << result.code << '\n';
    cout << "Name: " << result.name << '\n';
    cout << "Amount: " << result.amount << '\n';
    cout << "Cost: " << result.cost << '\n';
    cout << "Residual: " << result.res << '\n';
    cout << "Guarantee: " << result.gua << '\n';
    cout << "--------------------------\n";
    //=== Products with the least amount of stock
    result = product_min_res(inp, 0, n);
    cout << "\n=== Products with the least amount of stock\n";
    cout << "Code: " << result.code << '\n';
    cout << "Name: " << result.name << '\n';
    cout << "Amount: " << result.amount << '\n';
    cout << "Cost: " << result.cost << '\n';
    cout << "Residual: " << result.res << '\n';
    cout << "Guarantee: " << result.gua << '\n';
    cout << "--------------------------\n";
    //=== The product with the highest price
    result = product_max_cost(inp, 0, n);
    cout << "\n=== The product with the highest price\n";
    cout << "Code: " << result.code << '\n';
    cout << "Name: " << result.name << '\n';
    cout << "Amount: " << result.amount << '\n';
    cout << "Cost: " << result.cost << '\n';
    cout << "Residual: " << result.res << '\n';
    cout << "Guarantee: " << result.gua << '\n';
    cout << "--------------------------\n";
    //=== Products with a warranty period greater than 12 months
    filter out = product_filter_gua(inp, 0, n, 12);
    cout << "\n=== Products with a warranty period greater than 12 months\n";
    cout << "--------------------------\n";
    for (auto x : out.fil)
    {
        result = x;
        cout << "Code: " << result.code << '\n';
        cout << "Name: " << result.name << '\n';
        cout << "Amount: " << result.amount << '\n';
        cout << "Cost: " << result.cost << '\n';
        cout << "Residual: " << result.res << '\n';
        cout << "Guarantee: " << result.gua << '\n';
        cout << "--------------------------\n";
    }
    //=== Sort by residual
    sort(inp, inp+n, product_comp_res);
    cout << "\n=== Sort by residual\n";
    cout << "--------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Code: " << inp[i].code << '\n';
        cout << "Name: " << inp[i].name << '\n';
        cout << "Amount: " << inp[i].amount << '\n';
        cout << "Cost: " << inp[i].cost << '\n';
        cout << "Residual: " << inp[i].res << '\n';
        cout << "Guarantee: " << inp[i].gua << '\n';
        cout << "--------------------------\n";
    }

    return 0;
}