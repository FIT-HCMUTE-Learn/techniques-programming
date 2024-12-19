#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;
struct film{
    string name, genre, director;
    string male, female, year, manu;
} inp[maxarray];
struct filter{
    vector <film> fil;
};

filter film_filter_genre(film scan[], int32_t start, int32_t stusize, string str)
{
    vector <film> save;
    for (int i = start; i < start+stusize; i++)
        if (scan[i].genre == str)
            save.push_back(scan[i]);
    filter out; out.fil = save;
    return out;
}
filter film_filter_male(film scan[], int32_t start, int32_t stusize, string str)
{
    vector <film> save;
    for (int i = start; i < start+stusize; i++)
        if (scan[i].male == str)
            save.push_back(scan[i]);
    filter out; out.fil = save;
    return out;
}
filter film_filter_director(film scan[], int32_t start, int32_t stusize, string str)
{
    vector <film> save;
    for (int i = start; i < start+stusize; i++)
        if (scan[i].director == str)
            save.push_back(scan[i]);
    filter out; out.fil = save;
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n; cin.ignore(1);
    for (int i = 0; i < n; i++)
    {
        //cin.ignore(1);
        getline(cin, inp[i].name); 
        getline(cin, inp[i].genre);
        getline(cin, inp[i].director);
        getline(cin, inp[i].male);
        getline(cin, inp[i].female);
        getline(cin, inp[i].year);
        getline(cin, inp[i].manu);
    }
    string kind; getline(cin, kind);
    string one;  getline(cin, one);
    string two; getline(cin, two);

    filter result; film out;
    //=== Filter by film genre
    cout << "\n=== FILTER BY FILM GENRE: " << kind << '\n';
    result = film_filter_genre(inp, 0, n, kind);
    for (auto x : result.fil)
    {
        out = x;
        cout << "Film'name: " << out.name << '\n';
        cout << "Film genre: " << out.genre << '\n';
        cout << "Director's name: " << out.director << '\n';
        cout << "Main actor (male): " << out.male << '\n';
        cout << "Main actor (female): " << out.female << '\n';
        cout << "Year of film production: " << out.year << '\n';
        cout << "Productor film: " << out.manu << '\n';
        cout << "----------------------------------\n";
    }
    //=== Filter by main actor (male)
    cout << "\n=== FILTER BY MAIN ACTOR (male): " << one << '\n';
    result = film_filter_male(inp, 0, n, one);
    for (auto x : result.fil)
    {
        out = x;
        cout << "Film'name: " << out.name << '\n';
        cout << "Film genre: " << out.genre << '\n';
        cout << "Director's name: " << out.director << '\n';
        cout << "Main actor (male): " << out.male << '\n';
        cout << "Main actor (female): " << out.female << '\n';
        cout << "Year of film production: " << out.year << '\n';
        cout << "Productor film: " << out.manu << '\n';
        cout << "----------------------------------\n";
    }
    //=== Filter by director
    cout << "\n=== FILTER BY DIRECTOR: " << two << '\n';
    result = film_filter_director(inp, 0, n, two);
    for (auto x : result.fil)
    {
        out = x;
        cout << "Film'name: " << out.name << '\n';
        cout << "Film genre: " << out.genre << '\n';
        cout << "Director's name: " << out.director << '\n';
        cout << "Main actor (male): " << out.male << '\n';
        cout << "Main actor (female): " << out.female << '\n';
        cout << "Year of film production: " << out.year << '\n';
        cout << "Productor film: " << out.manu << '\n';
        cout << "----------------------------------\n";
    }
    return 0;
}