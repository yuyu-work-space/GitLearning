#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pa,pb,pap = 0,pbp = 0;
    int p[3];
    
    cin >> pa >> pb;
    for(int i = 0 ; i < 3 ; i ++)
    {
        cin >> p[i];
        if(p[i]) ++pbp;
        else ++pap;
    }

    if(pa > pb)
    {
        if(pap > 0)
        {
            cout << "The winner is a: " <<  pa << " + " << pap;
        }else cout << "The winner is b: " << pb << " + " << pbp;
    }else
    {
        if(pbp > 0)
        {
            cout << "The winner is b: " <<  pb << " + " << pbp;
        }else cout << "The winner is a: " << pa << " + " << pap;
    }
}