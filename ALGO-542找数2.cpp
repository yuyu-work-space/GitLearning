#include<bits/stdc++.h>
using namespace std;

/*二分查找（循环实现）*/
int BiSearch(int ary[],int n,int x)
{
    int left = 0,right = n - 1;                 //定义左下标和右下标
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(x == ary[mid]) return mid + 1;
        else if(x > ary[mid]) left = mid + 1;
        else right = mid - 1;
    }
    if(x < ary[0]) return 1;                    //当x比数组中所有的数小时，插入第一位，故返回1；
    if(x > ary[n - 1]) return n + 1;            //当x比数组中的所有数大时，返回最后一个数的下一个位置（这里题目中位置从1开始算）
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