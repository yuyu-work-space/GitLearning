#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number,cnt = 1;
    for(int i = 0 ; i < INT_MAX ; i ++)
    {
        cin >> number;
        if(number == 250) 
        {
            cout << cnt;
            break;
        }
        else cnt ++;
    }

}