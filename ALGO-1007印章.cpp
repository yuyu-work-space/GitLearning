#include<bits/stdc++.h>
using namespace std;
const int NUMMAX = 21;

int n,m;
double probability[NUMMAX][NUMMAX];

void solve()
{       

    double p = 1.0 / n;
    for(int i = 1 ; i <= m ; i ++)
    {
        for(int j = 1 ; j <= n ; j ++)
        { 
            if(j == 1) probability[i][j] = pow(p,i - 1);
            else if(i < j) probability[i][j] = 0.0000;
            else 
            {
                probability[i][j] = probability[i - 1][j] * j * 1.0 / n + probability[i - 1][j - 1] * (n - j + 1) * 1.0 / n;
            }
        }
    }

}

int main()
{
    cin >> n >> m;      //m ’≈ £¨n ÷÷ 
    
    solve();
    // for(int i = 1 ; i <= m ; i ++)
    // {
    //     for(int j = 1 ; j <= n ; j ++)
    //     {
    //         cout << probability[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    printf("%.4f\n",probability[m][n]);
}