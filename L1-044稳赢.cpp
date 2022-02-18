#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,cnt = 0;
    string chuzhao;

    cin >> k;
    while(cin >> chuzhao)
    {
        if(chuzhao == "End") break;
        cnt += 1;
        if(cnt == (k + 1)) 
        {
            cout << chuzhao << endl;
            cnt = 0;
        }else if(chuzhao == "ChuiZi") cout << "Bu" << endl;
        else if(chuzhao == "JianDao") cout << "ChuiZi" << endl;
        else if(chuzhao == "Bu") cout << "JianDao" << endl;
       
    }
}