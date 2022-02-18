#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    struct pepole
    {
        int sex;
        string name;
        int mark = 0;
    }student[50];
    
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> student[i].sex >> student[i].name;
    }

    for(int i = 0 ; i < n / 2 ; i ++)
    {
        cout << student[i].name << " ";
        for(int j = n - 1 ; j >= n / 2 ; j --)
        {
            if(student[j].sex != student[i].sex && student[j].mark == 0) 
            {
                student[j].mark = 1;
                cout << student[j].name;
                break;
            }
        }
        cout << endl;
    }
}