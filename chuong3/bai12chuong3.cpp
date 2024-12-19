#include <bits/stdc++.h>
#define maxarray 105

using namespace std;

string multi_big_num(string one, string two)
{
    vector <string> multi(maxarray);
    while (*one.begin() == '0') one.erase(one.begin());
    while (*two.begin() == '0') two.erase(two.begin());
    int32_t res, temp;
    string plus, infront;
    for (int i = two.size()-1; i >= 0; i--){
        plus = ""; res = 0;
        for (int j = one.size()-1; j > 0; j--){
            temp = (two[i]-'0')*(one[j]-'0') + res;
            plus += to_string(temp%10);
            res = temp/10;
        }
        temp = (two[i]-'0')*(one[0]-'0') + res;
        infront = to_string(temp);
        reverse(infront.begin(), infront.end());
        plus += infront;
        reverse(plus.begin(), plus.end());
        multi[two.size()-i-1] = plus;
    }
    for (int i = 0; i < two.size(); i++){
        for (int j = 0; j < i; j++)
            multi[i].push_back('0');
    }
    int32_t pivot = multi[two.size()-1].size();
    for (int i = 0; i < two.size(); i++){
        while (multi[i].size() < pivot) multi[i].insert(0, "0");
        //plus = multi[i]; cout << plus << '\n';
    }
    string result = ""; res = 0;
    for (int j = multi[0].size()-1; j >= 0; j--){
        temp = 0;
        for (int i = 0; i < two.size(); i++)
            temp += (multi[i][j]-'0');
        temp += res;
        if (j != 0){
            result += to_string(temp%10);
            res = temp/10;
        } else{
            infront = to_string(temp);
            reverse(infront.begin(), infront.end());
            result += infront;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    string up = multi_big_num(to_string(n), multi_big_num(to_string(n+1), to_string(n+2)));
    string pivot = "166666666666666666666666666666666666666666667";
    string result = multi_big_num(up, pivot);
    for (int i = 0; i < result.size()-pivot.size(); i++) cout << result[i];
    return 0;
}