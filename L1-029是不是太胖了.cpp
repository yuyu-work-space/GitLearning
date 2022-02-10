#include<bits/stdc++.h>
using namespace std;

int main()
{
    int H;
    double W;
    cin >> H;
    W = (H - 100) * 1.8;
    cout << setiosflags(ios::fixed) << setprecision(1) << W;
}