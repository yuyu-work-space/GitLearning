#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    struct pep
    {
        string name;
        int breath;
        int pulse;
    }person[10];
    
    cin >> N;
    for(int i = 0 ; i < N ; i ++)
    {
        cin >> person[i].name >> person[i].breath >> person[i].pulse;
        if(person[i].breath < 15 || person[i].breath > 20 || person[i].pulse < 50 || person[i].pulse > 70)
        {
            cout << person[i].name << endl;
        }
    }
}