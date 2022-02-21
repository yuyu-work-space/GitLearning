#include<bits/stdc++.h>
using namespace std;

long long f(int j)
{
    if(j == 0) return 1;
    else return 16 * f(--j);
}

long long h_d(string h)
{
    long long sum = 0;
    for(int j = 0 , i = h.size() - 1 ; i >= 0 , j < h.size() ; i -- , j ++)
    {
        if(h.at(i) <= '9' && h.at(i) >= '0')
            sum += (h.at(i) - '0') * f(j);
        else sum += (h.at(i) - 'A' + 10) * f(j);
    }
    return sum;
}

int main()
{
    string h;
    cin >> h;
    cout << h_d(h);
}