#include<bits/stdc++.h>
using namespace std;

long long power(long long a,long long n,long long p)
{
    long long ans = 1;
    while (n)
    {
        if(n % 2) ans = (ans * a ) % p;
        a = (a * a) % p;
        n /= 2;
    }
    return ans;
}

int main()
{
    long long a,b,c;
    int p = 1000000007;
    cin >> a >> b >> c;
    int n = power(b,c,(p - 1));
    cout << power(a,n,p);
}