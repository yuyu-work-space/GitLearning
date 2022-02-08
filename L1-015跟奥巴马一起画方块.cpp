#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    char ch;
    cin >> col >> ch;

    if(col % 2 == 0) row = col / 2;
    else row = (col + 1) / 2;
    for(int i = 0 ; i < row ; i ++)
    {
        for(int j = 0 ; j < col ; j ++)
        {
            cout << ch;
        }
        cout << endl;
    }
}