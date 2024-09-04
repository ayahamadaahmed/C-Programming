#include<iostream>
using namespace std;
int add ( int a, int b)
{
    int sum = 0 ;
    for ( int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}
int main ()
{
    int a,b;
    cout<< " PLZ Enter values of a:  ";
    cin>>a;
    cout<< " PLZ Enter values of b:  ";
    cin>>b;

    int result = add ( a,b);
    cout<< " the sum of the numbers from "<< a << " \t "<< "to"<< " \t " << b << "is" << " \t" <<  result <<"\n";
    return 0;

}