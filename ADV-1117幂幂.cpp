#include<bits/stdc++.h>
using namespace std;
const int Mod = 1000000007;

long long power(long long a,long long n,int Mod)
{
    long long ans = 1;
    while(n)
    {
        if(n % 2) ans = (ans * a) % Mod;
        a = (a * a) % Mod;
        n /= 2;   
    }
    return ans;
}

int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    int n = power(b,c,Mod - 1);
    cout << power(a,n,Mod);
}