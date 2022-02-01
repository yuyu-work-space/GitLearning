#include<bits/stdc++.h>
using namespace std;

struct s
{
    char num;
    int times;
}nt[1000];

int main()
{
    string N;
    int cnt = 1;
    cin >> N;
    int s = N.size();
    int j = 0;

    sort(N.begin(),N.end());

    for(int i = 0; i < s - 1; i ++)
    {
        if(N.at(i) == N.at(i + 1))
        {
            cnt ++;
        }else
        {
            nt[j].num = N.at(i);
            nt[j].times = cnt;
            cnt = 1;
            j ++;
        }
    }
    nt[j].num = N.at(s - 1);
    nt[j].times = cnt;

    for(int i = 0; i <= j ; i ++)
    {
        cout << nt[i].num << ":" << nt[i].times << endl;
    }
    
}