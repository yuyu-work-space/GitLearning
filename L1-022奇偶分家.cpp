#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,inter[1000];
    int odd = 0,even = 0;
    cin >> N;
    for(int i = 0 ; i < N ; i ++)
    {
        cin >> inter[i];
    }

    for(int i = 0 ; i < N ; i ++)
    {
        if(inter[i] % 2 == 0) even ++;
        else odd ++;
    }
    cout << odd << " " << even;
}