#include<bits/stdc++.h>
using namespace std;

void pan(int a,int b,int c)
{
    int d[3];
    d[0] = a;
    d[1] = b;
    d[2] = c;
    sort(d,d + 3);
    for(int i = 0 ; i < 2 ; i ++)
    {
        cout << d[i] << "->";
    }
    cout << d[2];
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    pan(a,b,c);
}