#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    string names[20];
    int cnt = 0;

    while (cin >> name)
    {
        if(name == ".") break;
        cnt += 1;
        if(cnt == 2 )
        {
            names[2] = name;
        }
        if(cnt == 14)
        {
            names[14] = name;
        }
    }
    if(cnt >= 2 && cnt <14)
        cout << names[2] << " is the only one for you..." << endl;
    else if(cnt >= 14)
        cout << names[2] << " and " << names[14] << " are inviting you to dinner..." << endl;
    else cout << "Momo... No one is for you ..." << endl;
}