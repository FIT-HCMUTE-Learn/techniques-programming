#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
int32_t arr[maxarray], brr[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> brr[i];
    int32_t time = min(arr[0], brr[0]);
    int32_t one = (time == arr[0]) ? arr[0]:0;
    int32_t two = (time == brr[0]) ? brr[0]:0;
    int32_t tmp;
    for (int i = 1; i < n; i++){
        time = min(one+arr[i], two+brr[i]);
        if (time == one+arr[i]) one += arr[i];
        else two += brr[i];
    }
    cout << max(one, two);
    return 0;
}