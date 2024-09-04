# include <iostream>
using namespace std;
int add ( int n)
{
    if ( n == 1)
    {
        return 1;
    }
    return (n + add( n-1)) ;
}

int main ()
{
    int num , sum;
    cout << " PLZ Enter numbers :  ";
    cin >>num;
    sum = add(num);
    cout << sum << endl ;
    return 0;
}
