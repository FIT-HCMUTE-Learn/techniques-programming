#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t n, dep;
int32_t out[105];

int Depth(){
    int i = 0;
    int open = 0, depth = 0;
    while (i < n){
        if (out[i] == 0)
            open++;
        else{
            if (open == 0)
                return -1;
            if (open > depth) depth = open;
            open--;
        }
        i++;
    }
    if (open == 0)
        return depth;
    else return -1;
}

void output(){
    for (int i = 0; i < n; i++)
        if (out[i] == 0)
            cout << "(";
        else cout << ")";
    cout << '\n';
}

void lkbracket(int k){
    if (k == n){
        if (Depth() == dep) output();
    }
    else
        for (int i = 0; i <= 1; i++){
            out[k] = i;
            lkbracket(k+1);
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> dep;
    lkbracket(0);
    return 0;
}