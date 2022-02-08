#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int sum = 0;
    int j = 1;
    for(int i = 1 ; i <= n ; i ++)
    {
        j *= i;
        sum += j;
    }
    return sum;
}

int main()
{
    int N;
    cin >> N;

    
    cout << factorial(N);
}