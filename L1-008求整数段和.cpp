#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B;
    int sum = 0;
    int cnt = 0;
    cin >> A >> B;
    
    for(int i = A ; i <= B ; i ++)
    {
        if(cnt % 5 == 0 && cnt != 0)
        {
            cout << endl;
        }
        cout << setw(5) << i;
        cnt ++;
        sum += i;
    }
    cout << endl;
    cout << "Sum = " << sum;
}