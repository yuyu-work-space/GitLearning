/* 问题描述

Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。

当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int Fn[1000000];
    Fn[0] = Fn[1] = 1;

    cin >> n;

    for(int i = 2 ; i < n ; i ++)
    {
        Fn[i] = (Fn[i - 1] + Fn[i - 2]) % 10007;
    }
    
    cout << Fn[n - 1];
}