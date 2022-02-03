#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    int num[1000];
    struct s
    {
        int seat_num,test_seat_num;
        string ID;
    }std[1000];
    
    cin >> N;
    for(int i = 0; i < N; i ++)
    {
        cin >> std[i].ID >> std[i].seat_num >>  std[i].test_seat_num;
    }

    cin >> M;
    for(int i = 0; i < M; i ++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < M; i ++)
    {
        for(int j = 0; j < N; j ++)
        {
            if(num[i] == std[j].seat_num)
            {
                cout << std[j].ID << " " << std[j].test_seat_num << endl;
            }
        }
    }
}