#include<bits/stdc++.h>
using namespace std;
int judge[200];
int main()
{
    string str1,str2;
    
    getline(cin,str1);
    getline(cin,str2);

    for(int i = 0 ; i < str2.size() ; i ++)
    {
        judge[str2.at(i) - '0'] = 1;
    }

    for(int i = 0 ; i < str1.size() ; i ++)
    {
        if(judge[str1.at(i) - '0'] != 1) cout << str1.at(i);
    }
}