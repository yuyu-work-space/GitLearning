#include<bits/stdc++.h>
using namespace std;
#define LL long long

LL slove(LL a, LL n, LL mod)
{
    LL ans = 1;
    a %= mod;
    while(n)
    {
        if(n % 2) ans = (ans * a) % mod;
        a = (a * a) % mod;
        n /= 2;
    }
    return ans;
}

int main()
{
    LL b,p,k;
    while(cin >> b >> p >> k)
    {
        cout << b << "^" << p << " mod " << k << "=" << slove(b,p,k) << endl;
        
    }
}