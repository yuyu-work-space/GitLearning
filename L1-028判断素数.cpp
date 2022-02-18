#include<bits/stdc++.h>
using namespace std;

bool prime(int x)
{
    for(int i = 2 ; i <= sqrt(x) ; i ++)
    {
        if(x % i == 0) return 0;  
    }
    return x <= 1 ? 0 : 1;
}

int main()
{
    int n;
    int num;
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> num;
        if(prime(num)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}