#include<bits/stdc++.h>
using namespace std;

int main()
{
    double w,h;
    cin >> w >> h;
    if(w / (h * h) > 25) 
    {
        cout << setiosflags(ios::fixed) << setprecision(1) << w / (h * h) << endl;
        cout << "PANG";
    }else
    {
        cout << setiosflags(ios::fixed) << setprecision(1) << w / (h * h) << endl;
        cout << "Hai Xing";
    }
}