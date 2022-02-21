#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int y;
    string res = "";

    cin >> n;

    if(n == 0)
        cout << "0";
    while(n > 0)
    {

        y = n % 16;
        n /= 16;
        if(y >= 0 && y <= 9) res += y + '0';
        else if(y <= 15) res += y + 'A' - 10;
    }
    for(int i = res.size() - 1 ; i >= 0 ; i --)
    {
        cout << res.at(i);
    }
}