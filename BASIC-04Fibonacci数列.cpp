/* ��������

Fibonacci���еĵ��ƹ�ʽΪ��Fn=Fn-1+Fn-2������F1=F2=1��

��n�Ƚϴ�ʱ��FnҲ�ǳ�������������֪����Fn����10007�������Ƕ���*/
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