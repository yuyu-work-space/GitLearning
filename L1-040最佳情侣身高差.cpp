#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    char gender[10];
    double high[10];

    cin >> N;
    for(int i = 0 ; i < N ; i ++)
    {
        cin >> gender[i] >> high[i];
        if(gender[i] == 'F') cout << setiosflags(ios::fixed) << setprecision(2) << high[i] * 1.09 << endl;
        if(gender[i] == 'M') cout << setiosflags(ios::fixed) << setprecision(2) << high[i] / 1.09 << endl;
    }

}