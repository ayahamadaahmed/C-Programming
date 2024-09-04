#include <iostream>
using namespace std;
int fib (int n )
{
    if ( n == 0)
    {
        return 0;
    }
    if ( n == 1 )
    {
        return 1;
    }
    return fib (n-1) + fib (n-2);
}
void fillfibonacciArray (int *arr,int n)
{
    for (int i = 0 ; i < n ; i++ )
    {
        arr[i] = fib(i);
    }
}


int main()
{
    int n;
    
    cout <<"PLZ Enter value of n: ";
    cin>> n;
    int *fiboarray = new int [n];
    fillfibonacciArray( fiboarray , n);

    cout <<" fibonacci series values: ";

    for (int i = 0 ; i < n ; i++ )
    {
        cout << fiboarray [i];

    }
    delete[] fiboarray;
    return 0;
}