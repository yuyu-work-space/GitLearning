#include<bits/stdc++.h>
using namespace std;

int ary[1000];

int check(int a,int n)
{
   /*����*/
    for(int i = 0; i < n ; i ++)
    {
        if(a == ary[i])
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int n,a;
    

    /*����*/
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> ary[i];
    }
    cin >> a;

    /*���*/
    cout <<  check(a,n);
}