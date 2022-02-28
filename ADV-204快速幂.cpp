#include<bits/stdc++.h>
using namespace std;

long long slove(long long a , long long b , int mod)
{
    long long ans = 1;
    a %= mod;   //防止 a * a的结果数据太大，超过long long
    while(b)
    {
        if(b % 2) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    
    return ans;
}

int main()
{
    long long n,m;
    int p;
    // for(int i = 0 ; i < 10 ; i ++)
    // {
        cin >> n >> m >> p;
        cout << slove(n,m,p) << endl;
    // }
}