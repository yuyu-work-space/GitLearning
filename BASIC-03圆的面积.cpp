#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    double area;
    cin >> r;

    area = r * r * M_PI ;
    cout << setiosflags(ios::fixed) << setprecision(7) << area;
}