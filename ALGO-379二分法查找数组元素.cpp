#include<bits/stdc++.h>
using namespace std;

int BiSearch(int x,int left,int right,int data[])
{
    if(left <= right)
    {
        int mid = (left + right) / 2;
        if(data[mid] < x) return BiSearch(x,mid + 1,right,data);
        else if(data[mid] > x) return BiSearch(x,left,mid - 1,data);
        else if(data[mid] == x) return mid;
    }else return -1;
}    

int main()
{
    int data[200];
    for(int i = 0 ; i < 200 ; i ++)
        data[i]=4*i+6;
    int x;
    cin >> x;
    cout << BiSearch(x,0,199,data);
}