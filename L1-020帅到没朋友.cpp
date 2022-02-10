#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K,M;
    string ID[100000];       //朋友圈中每个人的ID
    struct  check_pep
    {
        string ID_c;        //待查询的人的ID
        int f = 0;          //判断是否查询到的条件
        int c = 0;          //判断是否重复的条件
    }person[10000];         //待查询的人
    
    /*数据输入部分*/
    cin >> N;
    for(int i = 0 ; i < N ; i ++)
    {
        cin >> K;
        for(int j = 0 ; j < K ; j ++)
        {
            cin >> ID[j];
        }
    }
    cin >> M;
    for(int i = 0 ; i < M ; i ++)
    {
        cin >> person[i].ID_c;
    }

    /*判断待查询的人的ID是否有重复*/
    for(int i = 0 ; i < M - 1; i ++)
    {
        for(int j = i + 1 ; j < M ; j ++)
        {
            if(person[i].ID_c == person[j].ID_c) person[i].c = 1;
        }
    }

    
    for(int i = 0 ; i < M ; i ++)
    {
        for(int j = 0 ; j < N * K ; j ++)
        {
            if(person[i].ID_c == ID[j]) 
            {
                person[i].f = 1;
                break;
            }
        }
        if(!person[i].c)
        {
            if(person[i].f) cout << person[i].ID_c;
        }
    }
    
}