#include<bits/stdc++.h>
using namespace std;


int main()
{
    char ch[26];
    int n, m;
    cin >> n >> m;

    /*����*/
    for (int i = 0; i < m; i++)
    {
        ch[i] = 'A' + i;
        // cout << ch[i] << " ";
    }
    
    /*���*/
    for(int i = 0 ; i < m ; i ++)
    {
        cout << ch[i];
    }
    cout << endl;
    for(int i = 1 ; i < n ; i ++)    
    {
        for(int j = m ; j >= 1 ; j --)//�������
        {
            ch[j] = ch[j - 1];
        }
        ch[0] = 'A' + i;
        for(int k = 0 ; k < m ; k ++)
        {
            cout << ch[k];
        }
        cout << endl;
    }
}