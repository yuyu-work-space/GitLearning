#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    char ch;
    cin >> N >> ch;
    getchar();
    string str;
    getline(cin,str);

    int n = str.length();

    if(n > N)
    {
        str = str.substr((n - N));
        cout << str << endl;
    }else
    {
        for (int i = 0; i < (N - n); i++)
        {
            str = ch + str;
        }
        cout << str << endl;
    }
}