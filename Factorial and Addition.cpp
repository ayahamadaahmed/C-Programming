# include <iostream>
using namespace std;

int fact ( int num)
{
    if ( num == 0 || num == 1)
    {
        return 1;
    }
    cout << num <<"\n";
    return  num * fact(num - 1);


}

int add ( int N , int A)
{
        if ( N > A )
    {
        return 0;
    }
    
    return N + add ( N + 1 , A);

}

int main ()
{
    /*int numbers [] = { 1 ,3 ,5 ,7};
    for (int i = 0; i < 4; i++) 
    {
    int n = numbers[i];
    int factorialResult = fact(n);
    cout << "Factorial of " << n << " is " << factorialResult <<"\n";
    }*/
    int res = fact(7)+fact(5)+fact(3)+fact(1);
    cout << res;
    int N ;
    cout<<" PLZ Enter values of N:  ";
    cin>> N;
    int A = 25 ;  
    int sumresult = add( N , A);
    cout <<" sum from "<< N << " to " << A <<" is" << add(N,A )<<"\n";  



    float result = static_cast <float>  (sumresult) / res ;
    cout << "Result (Sum / Factorial) is " << result <<"\n";


     
 return 0;

}     
    

    

