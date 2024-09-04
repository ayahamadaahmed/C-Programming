#include<iostream>
using namespace std;
int main()
{
    int arr[3][5];
    int num[3][5];
    int result[3][5];

    cout <<" plz enter the first matrix";
    for ( int i = 0; i < 3; i++)
    {
        cout<<" enter the 5 elements of the row No is: "<<i<<"\n";
        for ( int j = 0; j < 5; j++)
        {
            cout <<" enter the elements of the column No is: "<<j<<"\n";
            cin>> arr[i][j];
        }
    }
    cout <<" plz enter the second  matrix";
    for ( int x = 0; x < 3; x++)
    {
        cout<<" enter the 5 elements of the row No is: "<<x<<"\n";
        for ( int y = 0; y < 5; y++)
        {
            cout <<" enter the elements of the column No is: "<<y<<"\n";
            cin>> num[x][y];
        }
    }
    for ( int a = 0; a < 3; a++)
    {
        for ( int b = 0; b < 5; b++)
        {
            result[a][b]= arr[a][b] + num[a][b];
        }
    } 
    cout <<" the first matrix is \n";
    for ( int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 5; j++)
        {
            cout <<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout <<" the second matrix is \n";
    for ( int x = 0; x < 3; x++)
    {
        for ( int y = 0; y < 5; y++)
        {
            cout<<num[x][y]<<" ";
        }
        cout<<"\n";

    }
    cout <<" the resulting matrix is"<<"\n";
    for ( int a = 0; a < 3; a++)
    {
        for ( int b = 0; b < 5; b++)
        {
            cout <<result[a][b]<<" ";
        } 
        cout<<"\n";
    }


    return 0;
}