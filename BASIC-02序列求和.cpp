#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long sum = 0;
    cin >> n;
    
    sum = n + n * (n - 1) / 2;
    cout << sum;
}