#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v(5);
    for(int i=0; i<v.size(); i++)
    {
        cin >>v[i];

    }
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i]  ;

    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout <<v[i] <<" " ;
    }
    cout << endl;
}