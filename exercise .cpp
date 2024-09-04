#include<iostream>
using namespace std;
/*float area (int r)
{
    float ar;
    ar = 3.14 *r*r;
    return ar;
}
float param (int r)
{
    float para;
    para = 2 * 3.14 *r;
    return para;
}
int main()
{
    int n ;
    cout <<" PLZ Enter value of n:";
    cin >> n;
    cout << param(n)<<endl;
    cout << area(n);
}*/
/*int counterzero (int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if ( n < 10)
    {
        return 0;
    }
    else if ( n % 10==0)
    {
        return counterzero (n/10) +1 ;
    }
    else 
    {
        return counterzero(n / 10);
    }    
    
}
int main()
{
    int n , count;
    cout <<" PLZ Enter number: ";
    cin>> n;
    count = counterzero(n);
    cout<< count;
}*/
/*
int square (int n)
{
    int res = n*n;
    return res; 
}
int main()
{
    int a[10];
    cout <<" PLZ Enter 10 numbers";
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << square (a[i])<<endl;
        
    }


}
*/
/*
void square(int *p)
{
    for( int i = 0; i<10;i++)
    {
       *(p+i) =*(p+i) *  *(p+i);

    } 
}
int main()
{
    int arr[10];
    cout<<"enter 10 numbers";
    for ( int i =0 ; i<10; i++)
    {
        cin>>arr[i];

    }
    square (arr);
    for ( int i =0 ; i<10; i++)
    {
        cout<<arr[i]<<endl;

    }
    
}*/

