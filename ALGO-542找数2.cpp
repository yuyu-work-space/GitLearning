#include<bits/stdc++.h>
using namespace std;

/*���ֲ��ң�ѭ��ʵ�֣�*/
int BiSearch(int ary[],int n,int x)
{
    int left = 0,right = n - 1;                 //�������±�����±�
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(x == ary[mid]) return mid + 1;
        else if(x > ary[mid]) left = mid + 1;
        else right = mid - 1;
    }
    if(x < ary[0]) return 1;                    //��x�����������е���Сʱ�������һλ���ʷ���1��
    if(x > ary[n - 1]) return n + 1;            //��x�������е���������ʱ���������һ��������һ��λ�ã�������Ŀ��λ�ô�1��ʼ�㣩
    for(int i = 0 ; i < n ; i ++)
    {
        if(ary[i] > x) return i + 1;
    }
}

int main()
{
    int n,x;
    int ary[1000];

    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> ary[i];
    }
    cin >> x;
    cout << BiSearch(ary,n,x);
}