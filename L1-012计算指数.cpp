#include<bits/stdc++.h>
using namespace std;

/*ʵ�ַ���һ ѭ��*/
// int main()
// {
//     int n;
//     int cj = 1;
//     cin >> n;

//     if(n == 0) cout << 1;
//     for(int i = 1 ; i <= n ; i ++)
//     {
//         cj *= 2;
//     }
//     cout << "2^" << n << " = " << cj;
// }

/*ʵ�ַ����� �ݹ�*/
int out_cj(int begin,int end,int cj)
{
    if(end == 0) return 1;
    if(begin == end) return cj;
    cj *= 2;
    out_cj(++begin,end,cj);
}

int main()
{
    int n;
    int cj = 1;
    cin >> n;

    cout << "2^" << n << " = " << out_cj(0,n,cj);
}