#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for(int i = 6 ; i < str.size() ; i ++)
    {
        cout << str.at(i);
    }
    cout << "-";
    for(int i = 0 ; i < 5 ; i ++)
    {
        cout << str.at(i);
    }
}