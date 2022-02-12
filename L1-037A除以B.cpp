#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A,B,quotient;
    cin >> A >> B;

    if(B == 0) cout << A << "/" << B << "=Error";
    else if(B < 0) cout << A << "/(" << B << ")=" << setiosflags(ios::fixed) << setprecision(2) << A / B ;
    else cout << A << "/" << B << "=" << setiosflags(ios::fixed) << setprecision(2) << A / B ;  
}