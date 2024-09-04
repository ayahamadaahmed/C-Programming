# include <iostream>
using namespace std;
int fact ( int num)
// loop
{
    int result = 1;
    for ( int i = 1; i <= num ; i++ )
    {
        result *=i; 
    }
    return result ;
}
// by use recursion
//{
    //if ( num == 0 || num == 1)
    //{
        //return 1;
    //}
    //cout << num <<"\n";
    //cout <<" ==== \n";
     
    //return  num * fact(num - 1);


//}

int main ()
{
    int a , b , c;
    cout << " PLZ Enter factorial number: ";
    cin >> a >> b >> c;
    int factorial_a = fact(a);
    int factorial_b = fact(b);
    int factorial_c = fact(c);

    int result = factorial_a + factorial_b - factorial_c;
    cout << a << "! +"<< b<< "! -" << c << "! ="<< result;
    return 0;

    
}    
