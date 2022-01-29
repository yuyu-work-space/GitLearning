#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    char ch;
    int cnt = 0;
    int SUM = 0;
    cin >> N >> ch;

    for(int i = 1; i < N; i ++)
    {
        int sum = (i * 3 + i * (i - 1)) * 2;
        int sum1 = ((i - 1) * 3 + (i - 1) * (i - 2)) * 2;
        if(sum >= N && sum1 <= N)
        {
            cnt = i - 1;
            SUM = sum1;
            break;
        }
    }
    
    for(int i = cnt; i >= 0; i --)
    {
        if(i == cnt)
        {
            for(int j = 0; j < (2 * cnt + 1); j ++)
            {
                cout << ch;
            }
            cout << endl;
        }else 
        {
            for(int j = 0; j < cnt - i; j ++)
            {
                cout << " ";
            }
            for(int j = 0; j < (2 * i + 1); j ++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }
    for(int i = 1; i <= cnt; i ++)
    {
        for(int j = 0; j < cnt - i; j ++)
        {
            cout << " ";
        }
        for(int j = 0; j < (2 * i + 1); j ++)
        {
            cout << ch;
        }
            cout << endl;
    }
    cout << (N - SUM - 1) << endl;
}