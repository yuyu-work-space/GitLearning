#include<bits/stdc++.h>
using namespace std;


int main()
{
    int ary[10000];
    int n;
    int sum = 0;
    cin >> n;

    for(int i = 0; i < n ; i ++)
    {
        cin >> ary[i];
        sum += ary[i];
    }

    sort(ary,ary + n);

    cout << ary[n - 1] << endl;
    cout << ary[0] << endl;
    cout << sum; 
}