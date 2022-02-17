#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    double price[100];

    cin >> n >> m;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> price[i];
        if(price[i] < m) printf("On Sale! %.1f\n",price[i]);
    }
    
}