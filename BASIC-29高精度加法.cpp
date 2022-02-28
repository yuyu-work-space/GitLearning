#include<bits/stdc++.h>
using namespace std;
string a,b;
int c[101],t;
int d[101],e[101];

int main()
{


    getline(cin , a);
    getline(cin , b);

    /*将字符串a，b从最后一位开始，放在数组d，e的第零位
    数组的第零位看作个位*/
    for(int i = a.size() - 1 , j = 0 ; i >= 0 ; i -- , j ++)
    {
        if(a.at(i) <= '9' && a.at(i) >= '0') d[j] = a.at(i) - '0';
    }
    for(int i = b.size() - 1 , j = 0 ; i >= 0 ; i -- , j ++)
    {
        if(b.at(i) <= '9' && b.at(i) >= '0') e[j] = b.at(i) - '0';
    }

    // 验证输入的字符串形式数据是否正确地存储进整形的数组中
    // for(int i = 0 ; i <= a.size() ; i ++)
    // {
    //     cout << d[i];
    // }
    // cout << endl;
    // for(int i = 0 ; i < b.size() ; i ++)
    // {
    //     cout << e[i];
    // }
    // cout << endl;

    int n = max(a.length(),b.length());
    // cout << n << endl;           //验证n的正确性
    int r = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        c[i] = ( d[i] + e[i]  + r ) % 10;
        r = ( d[i] + e[i] + r) / 10;
    }
    if(r != 0) 
    {
        c[n] = r;
        t = n;
    }else t = n-1;
    for(int i = t; i >= 0 ; i --)
        cout << c[i];

}