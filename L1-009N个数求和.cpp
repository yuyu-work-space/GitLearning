#include<bits/stdc++.h>
using namespace std;

/*�������������Լ��*/
int gcd(int num1,int num2)
{
    int tmp;
    if(num1 >= num2)
    {
        tmp = num1 % num2;
    }else tmp = num2 % num1;
    if(tmp != 0)
    {
        gcd((num1 >= num2 ? num2 : num1),tmp);
    }else
    {
        return (num1 >= num2) ? num2 : num1;
    }
}
/*��N���������Լ��*/
int GCD(int num[],int n)
{
    int c = num[0];
    for(int i = 1 ; i < n ; i ++)
    {
        c = gcd(c,num[i]);
    }
    return c;
}
/*��������num1��num2����С������*/
int lcm(int num1,int num2)
{
    return num1 * num2 / gcd(num1,num2);
}
/*��N��������С������*/
int LCM(int num[],int n)
{
    int d = 1;
    for(int i = 0 ; i < n ; i ++)
    {
        d = lcm(d,num[i]);
    }
    return d;
}
int main()
{
    /*�������*/
    struct fraction
    {
        int a;
        int b;
    }num[100];
    int N;
    char ch;
    int numerator = 0;
    int denominator = 0;
    int integer;
    /*����*/
    cin >> N;
    for(int i = 0; i < N; i ++)
    {
        cin >> num[i].a >> ch >> num[i].b;
    }
    int num0[100];
    /*�����з�ĸ��ֵ����һ��������*/
    for(int i = 0 ; i < N ; i ++)
    {
        num0[i] = num[i].b;
    }
    /*����GCD()��LCM()����*/
    int LCM_d = LCM(num0,N);
    /*�����з���ͨ�����*/
    for(int i = 0; i < N; i ++)
    {
        num[i].a *= (LCM_d / num[i].b);
        num[i].b = LCM_d;
    }
    for(int i = 0; i < N; i ++)
    {
        numerator += num[i].a;
        denominator = num[i].b;
    }

    // cout << LCM_d << endl;                           //��֤��С�����������
    // cout << numerator << " " << denominator << endl;//��֤���з��ӵĺ��Լ���ĸ

    if(numerator >= denominator)
    {
        integer = numerator / denominator;
        numerator %= denominator;
        if(numerator == 0)
        {
            cout << integer;
        }else
        {
            numerator /= gcd(numerator,denominator);
            denominator /= gcd(numerator,denominator);
            cout << integer << " " << numerator << "/" << denominator;
        }
    }else
    {
        numerator /= gcd(numerator,denominator);
        denominator /= gcd(numerator,denominator);
        cout << numerator << "/" << denominator;
    }
}