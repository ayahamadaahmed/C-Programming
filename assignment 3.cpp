#include <iostream>
using namespace std;

//recursion

int power ( int n , int m)
{
    if ( m == 0)
    {
        return 1;
    }
    else 
    {
        return ( n * power ( n , m-1));
    }


}
//int main()
//{
    //int base , exponent;
    //cout <<" PLZ Enter two numbers: ";
    //cin >> base >> exponent ;
    //int result = power ( base , exponent);
    //cout <<result <<"\t =";
    
    //return 0;
//}

//loop

int main ()
{
    int base ; int exponent;
    cout <<" PLZ Enter two numbers:  ";
    cin>> base >> exponent;
    int result = 1;

    for ( int i = 0; i < exponent   ; i++ )
    {
        
        result *= base ;

       
    }
    cout << base << "^"<< exponent << "=" << result ;    

     return 0;
}


//name : Aya Hamada farag
