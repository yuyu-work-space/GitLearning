#include<bits/stdc++.h>
using namespace std;

int coin[1001][1001];

int main()
{
    int n;
    

    cin >> n;
    for(int i = 1 ; i <= n ; i ++)
        for(int j = 1 ; j <= n ; j ++)
            cin >> coin[i][j];

    coin[0][1] = coin[1][0] = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ;j ++)
        {
            if(coin[i][j - 1] > coin[i - 1][j]) coin[i][j] += coin[i][j - 1];
            else coin[i][j] += coin[i - 1][j];
        }
    }
        
    int max = coin[n][1];
    for(int i = 2 ; i <= n ; i ++)
    {
        if(max < coin[n][i]) max = coin[n][i];
    }
    cout << max;
}