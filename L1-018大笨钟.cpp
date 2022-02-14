#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,d;
    char c;
    cin >> h >> c >> d;
    // cout << h << c << d;

    if(h > 12)
    {
        if(d == 0)
        {
            for(int i = 0 ; i < h - 12 ; i ++)
                cout << "Dang";
        }else
        {
            for(int i = 0 ; i <= h - 12 ; i ++)
                cout << "Dang";
        }
    }else if(h < 10 )
    {
        if(d < 10) cout << "Only 0" << h << c << "0" << d << ".  Too early to Dang.";
        else cout << "Only 0" << h << c << d << ".  Too early to Dang.";
    }else
    {
        if(d < 10) cout << "Only " << h << c << "0" << d << ".  Too early to Dang.";
        else cout << "Only " << h << c << d << ".  Too early to Dang.";
    }
}