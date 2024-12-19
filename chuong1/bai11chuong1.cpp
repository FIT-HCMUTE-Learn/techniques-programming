#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct student{
    string code, name;
    int32_t birth;
    double math, physic, chemis, avg;
} inp[maxarray];
struct filter{
    vector <student> fil;
};

bool stu_comp_avg_less(student a, student b){
    return (a.avg < b.avg);
}
bool stu_comp_math_greater(student a, student b){
    return (a.math > b.math);
}

student stu_max_avg(student scan[], int32_t start, int32_t stusize)
{
    student out = scan[start];
    for (int i = start+1; i < start+stusize; i++)
        if (scan[i].avg > out.avg) out = scan[i];
    return out;
}
student stu_max_birth(student scan[], int32_t start, int32_t stusize)
{
    student out = scan[start];
    for (int i = start+1; i < start+stusize; i++)
        if (scan[i].birth < out.birth) out = scan[i];
    return out;
}
filter stu_filter_gpaandsubject(student scan[], int32_t start, int32_t stusize)
{
    vector <student> save;
    for (int i = start; i < start+stusize; i++)
        if (scan[i].avg>=5 && scan[i].math>=3 
        && scan[i].physic>=3 && scan[i].chemis>=3)
            save.push_back(scan[i]);
    filter out; out.fil = save;
    return out;
}
int32_t stu_search_name(student scan[], int32_t start, int32_t stusize, string str)
{
    for (int i = start; i < start+stusize; i++)
        if (str == scan[i].name) return i;
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        //cin.ignore(1);
        getline(cin, inp[i].code);
        getline(cin, inp[i].name);
        cin >> inp[i].birth;
        cin >> inp[i].math >> inp[i].physic >> inp[i].chemis;
        cin >> inp[i].avg;
    }
    string str; cin.ignore(1); getline(cin, str);
    student stu;
    //=== Print students list
    cout << "=== PRINT STUDENTS LIST\n";
    cout << "------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student code: " << inp[i].code << '\n';
        cout << "Full name: " << inp[i].name << '\n';
        cout << "Birth: " << inp[i].birth << '\n';
        cout << "Math score: " << fixed << setprecision(2) << inp[i].math << '\n';
        cout << "Physics score: " << fixed << setprecision(2) << inp[i].physic << '\n';
        cout << "Chemistry score: " << fixed << setprecision(2) << inp[i].chemis << '\n';
        cout << "Medium score: " << fixed << setprecision(2) << inp[i].avg << '\n';
        cout << "------------------------\n";
    }
    //=== Max medium score
    stu = stu_max_avg(inp, 0, n);
    cout << '\n'; cout << "=== MAX MEDIUM SCORE: " << fixed << setprecision(2) << stu.avg << '\n';
    cout << "------------------------\n";
    cout << "Student code: " << stu.code << '\n';
    cout << "Full name: " << stu.name << '\n';
    cout << "Birth: " << stu.birth << '\n';
    cout << "Math score: " << fixed << setprecision(2) << stu.math << '\n';
    cout << "Physics score: " << fixed << setprecision(2) << stu.physic << '\n';
    cout << "Chemistry score: " << fixed << setprecision(2) << stu.chemis << '\n';
    cout << "Medium score: " << fixed << setprecision(2) << stu.avg << '\n';    
    //=== Sort by medium score <less>
    cout << '\n'; cout << "=== SORT BY MEDIUM SCORE <less>\n";
    cout << "------------------------\n";
    sort(inp, inp+n, stu_comp_avg_less);
    for (int i = 0; i < n; i++)
    {
        cout << "Student code: " << inp[i].code << '\n';
        cout << "Full name: " << inp[i].name << '\n';
        cout << "Medium score: " << fixed << setprecision(2) << inp[i].avg << '\n';
        cout << "------------------------\n";
    }
    //=== Sort by math score <greater>
    cout << '\n'; cout << "=== SORT BY MATH SCORE <greater>\n";
    cout << "------------------------\n";
    sort(inp, inp+n, stu_comp_math_greater);
    for (int i = 0; i < n; i++)
    {
        cout << "Student code: " << inp[i].code << '\n';
        cout << "Full name: " << inp[i].name << '\n';
        cout << "Math score: " << fixed << setprecision(2) << inp[i].math << '\n';
        cout << "------------------------\n";
    }    
    //=== Sort by GPA greater than 5 and no any subject under 3
    cout << '\n'; cout << "=== SORT BY GPA>=5 AND ANY SUBJECT>=3\n";
    cout << "------------------------\n";
    filter out = stu_filter_gpaandsubject(inp, 0, n);
    for(auto x : out.fil)
    {
        stu = x;
        cout << "Student code: " << stu.code << '\n';
        cout << "Full name: " << stu.name << '\n';
        cout << "Birth: " << stu.birth << '\n';
        cout << "Math score: " << fixed << setprecision(2) << stu.math << '\n';
        cout << "Physics score: " << fixed << setprecision(2) << stu.physic << '\n';
        cout << "Chemistry score: " << fixed << setprecision(2) << stu.chemis << '\n';
        cout << "Medium score: " << fixed << setprecision(2) << stu.avg << '\n';
        cout << "------------------------\n"; 
    }
    //=== Max birth
    stu = stu_max_birth(inp, 0, n);
    cout << '\n'; cout << "=== OLDEST STUDENT: " << stu.birth << '\n';
    cout << "------------------------\n";
    cout << "Student code: " << stu.code << '\n';
    cout << "Full name: " << stu.name << '\n';
    cout << "Birth: " << stu.birth << '\n';
    cout << "Math score: " << fixed << setprecision(2) << stu.math << '\n';
    cout << "Physics score: " << fixed << setprecision(2) << stu.physic << '\n';
    cout << "Chemistry score: " << fixed << setprecision(2) << stu.chemis << '\n';
    cout << "Medium score: " << fixed << setprecision(2) << stu.avg << '\n';   
    //=== Search student
    cout << '\n'; cout << "Student'name: " << str << '\n';
    int32_t pos = stu_search_name(inp, 0, n, str);
    if (pos == -1) cout << "No information about student\n";
    else
    {
        stu = inp[pos];
        cout << "Student code: " << stu.code << '\n';
        cout << "Full name: " << stu.name << '\n';
        cout << "Birth: " << stu.birth << '\n';
        cout << "Math score: " << fixed << setprecision(2) << stu.math << '\n';
        cout << "Physics score: " << fixed << setprecision(2) << stu.physic << '\n';
        cout << "Chemistry score: " << fixed << setprecision(2) << stu.chemis << '\n';
        cout << "Medium score: " << fixed << setprecision(2) << stu.avg << '\n';   
    }
    //=== the end
    return 0;
}