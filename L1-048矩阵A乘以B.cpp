#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[100][100];
    int B[100][100];
    int C[100][100];
    int Ra,Ca,Rb,Cb;
    cin >> Ra >> Ca;
    for(int i = 0 ; i < Ra ; i ++)
    {
        for(int j = 0 ; j < Ca ; j ++)
        {
            cin >> A[i][j];
        }
    }
    cin >> Rb >> Cb;
    for(int i = 0 ; i < Rb ; i ++)
    {
        for(int j = 0 ; j < Cb ; j ++)
        {
            cin >> B[i][j];
        }
    }

    if(Ca == Rb)
    {
        cout << Ra << " " << Cb << endl;
        for(int i = 0 ; i < Ra ; i ++)
        {
            for(int j = 0 ; j < Cb ; j ++)
            {
                C[i][j] = 0;
                for(int k = 0 ; k < Ca; k ++)
                {
                    C[i][j] += A[i][k] * B[k][j]; 
                }
                if(j < Cb - 1)
                    cout << C[i][j] << " ";
                else cout << C[i][j];
            }
            cout << endl;
        }
    }else cout << "Error: " << Ca << " != " << Rb;
    
}