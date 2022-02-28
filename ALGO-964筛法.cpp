#include<bits/stdc++.h>
using namespace std;

int euler(int n)
{
    int ans = n;
    if(n == 1) return 1;
    for(int i = 2 ; i * i <= n ; i ++)
    {
        if(n % i == 0)
        {
            ans = ans / i * (i - 1);
            while(n % i == 0)
            {
                n /= i;
            }
        }
    }
    if(n > 1) ans = ans / n * (n - 1);    //确保所有素因子都除完了，例如：21 ，循环之后 n >= 7 > 1
    return ans;
} 

int main()
{
    int n;

    cin >> n;

    for(int i = 1 ; i <= n ; i ++)
    {
        cout << euler(i) << endl;

    }


}