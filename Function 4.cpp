#include <iostream>
using namespace std;
// call by value
/*void swap ( int x, int y);
int main()
{
    int x = 100;
    int y = 200;
    cout <<" Before swaping vallue of x is " << x<<"\n";
    cout <<" Before swaping vallue of y is " << y<<"\n";

    swap ( x , y);

    cout <<" after swaping vallue of x is " << x<<"\n";
    cout <<" after swaping vallue of y is " << y<<"\n";



}
void swap ( int x , int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp; 
}*/
// call by pointer
/*void swap ( int *x, int *y);
int main()
{
    int x = 100;
    int y = 200;
    cout <<" Before swaping vallue of x is " << x<<"\n";
    cout <<" Before swaping vallue of y is " << y<<"\n";

    swap ( &x , &y);

    cout <<" after swaping vallue of x is " << x<<"\n";
    cout <<" after swaping vallue of y is " << y<<"\n";



}
void swap ( int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; 
}*/

//recursion cal factorial
/*int fact ( int num)
{
    if ( num == 0 || num == 1)
    {
        return 1;
    }
    cout<<num<<"\n";
    return num* fact (num-1);
}
int main ()
{
    int num;
    //cout<< fact (5);
    cout << " PLZ Enter value: ";
    cin>>num;
    cout << fact (num);
    
   return 0; 
}*/

// recursive cal add
/*int add ( int num)
{
    if ( num == 0)
    {
        return 1;
    }
    cout<< num<<"\n";
    return num + add ( num - 1);
}
int main ()
{
    int num;
    //cout << add (5);
    cout << "PLZ Enter value: ";
    cin>>num;
    cout << add ( num);

    return 0;
}*/

//fibonaccci series
/*int fib ( int num)
{
    if (num == 0)
    {
        return 0;
    }
    if ( num == 1)
    {
        return 1;
    }
    return fib (num-1)+ fib (num-2);
}
int main()
{
    cout<<fib(6);
    return 0;
}*/

int add( int start , int end)
{
    
    if (start > end )
    {
        return 0;
    }
    
    return start + add ( 1 + start, end);

}
int fac ( int num)
{
    if ( num == 0 || num == 1)
    {
        return 1;
    }
    
    return num *fac (num-1);
}
int main ()
{
    int x , y;
    cout << " PLZ Enter the initial value: ";
    cin>> x;
    cout << " PLZ Enter the end value: ";
    cin>> y;
    cout << add (x , y)<<"\n";

    int numbers [] = { 1, 3,5,7};
    int sum = 0;
    for (int i = 0; i < 4; i ++)
    {
        sum += fac(numbers[i]);
    }
    cout <<"sum of factorial is" << sum<<"\n" ;

    float result ;
    result =  add(x,y) / static_cast <float> (fac(7));
    cout << result<<"\n";


}
