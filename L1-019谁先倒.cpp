#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,N;      //a,bΪ���ҵľ���
    int A_h[100],B_h[100];    //���Һ���������
    int A_q[100],B_q[100];    //���ұȻ�������
    int A_a = 0,B_b = 0;    //���ҷ����Ĵ���
    int q_a = 0,q_b = 0;    //����˭����ж�����
    cin >> a >> b;          //����������˵ľ���
    cin >> N;               //����������˻�ȭ������
    for(int i = 0 ; i < N ; i ++)
    {
        cin >> A_h[i] >> A_q[i] >> B_h[i] >> B_q[i];    //ѭ������������˺��ͻ�����
    }

    for(int i = 0 ; i < N ; i ++)
    {
        q_a = q_b = 0;
        if(A_q[i] == (A_h[i] + B_h[i]) && B_q[i] == (A_h[i] + B_h[i])) 
        {
            q_a = q_b = 1;
            // cout << q_a << " " << q_b << endl;
        }
        else if(A_q[i] != (A_h[i] + B_h[i]) && B_q[i] != (A_h[i] + B_h[i])) q_a = q_b = 1;
        else if(A_q[i] == (A_h[i] + B_h[i])) q_a = 1;
        else if(B_q[i] == (A_h[i] + B_h[i])) q_b = 1;

        if(A_a <= a && B_b <= b)  //�жϼ����Ƿ�ﵽ����
        {
            // cout << q_a << " " << q_b;
            if(q_a == q_b)               //�жϼ����Ƿ�ͬӮ��ͬ��
            {
                continue;       //�ǣ��������ǰѭ��
            }else if(q_a)       //�ж��Ƿ��Ǽ���
            {
                A_a ++;
            }else B_b ++;
            if(A_a > a && B_b <= b)
            {
                cout << "A" << endl;
                cout << B_b;
                break;
            }else if(A_a <= a && B_b > b)
            {
                cout << "B" << endl;
                cout << A_a;
                break;
            }
        } 
    }
}