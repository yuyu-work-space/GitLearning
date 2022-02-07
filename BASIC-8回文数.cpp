#include<bits/stdc++.h>
using namespace std;

int a,b,c,d;

void find(int n)
{
    a = n / 1000;
    b = n / 100 % 10;
    c = n / 10 % 10;
    d = n % 10;
    if(a == d && b == c) cout << n << endl;
    n++;
    if(n <= 9999) find(n);
    
}

int main()
{
    find(1000);
}