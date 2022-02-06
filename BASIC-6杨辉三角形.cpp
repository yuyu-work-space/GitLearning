#include<bits/stdc++.h>
using namespace std;

int n;
int ary[1000][1000];

void Pascal()
{
    ary[0][0] = 1;
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 1 ; j <= i ; j ++)
        {
            ary[i][j] = ary[i - 1][j - 1] + ary[i - 1][j];
            cout << ary[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> n;
    Pascal();
}