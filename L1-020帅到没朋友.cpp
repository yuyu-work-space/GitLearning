#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K,M;
    string ID[100000];       //����Ȧ��ÿ���˵�ID
    struct  check_pep
    {
        string ID_c;        //����ѯ���˵�ID
        int f = 0;          //�ж��Ƿ��ѯ��������
        int c = 0;          //�ж��Ƿ��ظ�������
    }person[10000];         //����ѯ����
    
    /*�������벿��*/
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

    /*�жϴ���ѯ���˵�ID�Ƿ����ظ�*/
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