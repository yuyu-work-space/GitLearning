#include<bits/stdc++.h>
using namespace std;
#define LL long long
const int N = 2;
const int Mod = 1000000007;
struct Matrix
{
    LL arr[N][N];
    Matrix()
    {
        memset(arr,0,sizeof(arr));
    }
};

Matrix Mul(Matrix a, Matrix b)
{
    Matrix res;
    for(int i = 0 ; i < N ; i ++)
    {
        for(int j = 0 ; j < N ; j ++)
        {
            for(int k = 0 ; k < N ; k ++)
            {
                res.arr[i][j] = (res.arr[i][j] + a.arr[i][k] * b.arr[k][j] % Mod) % Mod;
            }
        }
    }
    return res;
}

Matrix solve(Matrix a, LL n)
{
    Matrix res;
    for(int i = 0 ; i < N ; i ++)
        res.arr[i][i] = 1;
    while(n)
    {
        if(n & 1) res = Mul(res,a);
        a = Mul(a,a);
        n >>= 1;
    }
    return res;
}

int main()
{
    LL t;
    Matrix m,ans;
    while (cin >> t)
    {
        m.arr[0][0] = m.arr[0][1] = m.arr[1][0] = 1;
        ans = solve(m,t);
    }
    cout << ans.arr[0][0];
}