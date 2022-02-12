#include<bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    double cnt = 0.0;
    double ans = 1.0;
    cin >> N;

    for(int i = 0 ; i < N.size() ; i ++)
    {
        if(N.at(i) == '-') ans *= 1.5;
        if(N.at(i) == '2') cnt ++;
    }
    if((N.at(N.size() - 1) - '0') % 2 == 0) ans *= 2.0;
    if(N.at(0) == '-') ans *= (cnt / (N.size() - 1) * 100);
    else ans *= (cnt / N.size() * 100);

    cout << setiosflags(ios::fixed) << setprecision(2) << ans << "%";
}