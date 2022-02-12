#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,N;      //a,b为甲乙的酒量
    int A_h[100],B_h[100];    //甲乙喊出的数字
    int A_q[100],B_q[100];    //甲乙比划的数字
    int A_a = 0,B_b = 0;    //甲乙罚杯的次数
    int q_a = 0,q_b = 0;    //甲乙谁输的判断条件
    cin >> a >> b;          //输入甲乙两人的酒量
    cin >> N;               //输入甲乙两人划拳的轮数
    for(int i = 0 ; i < N ; i ++)
    {
        cin >> A_h[i] >> A_q[i] >> B_h[i] >> B_q[i];    //循环输入甲乙两人喊和划的数
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

        if(A_a <= a && B_b <= b)  //判断甲乙是否达到酒量
        {
            // cout << q_a << " " << q_b;
            if(q_a == q_b)               //判断甲乙是否同赢或同输
            {
                continue;       //是，则继续当前循环
            }else if(q_a)       //判断是否是甲输
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