#include <iostream>
using namespace std;
/*void sum (int num1 , int num2 , int num3)
{
    int res ;
    res = (num1 + num2 + num3);
    cout << " The Sum of Three numbers is: " << res <<endl;
    float avg;
    avg = res / 3;
    cout << "The Average of three numbers is: " << avg << endl;
}
int main ()
{
    int n1 , n2 , n3;
    cout << "PLZ Enter Three numbers: " << endl;
    cin >> n1 >> n2 >> n3;
    sum (n1 , n2 , n3);
}*/
/*int add (int N)
{
    int res;
    if (N == 1)
    {
      return  res = 1;
    }
    else
    {
        return res = N + add (N - 1); 

    }
}
int main ()
{
    int Num;
    cout << "PLZ Enter num: ";
    cin >> Num;
    cout << add (Num);
}*/
/*int counterZero (int N)
{
    if (N == 0)
    {
        return 1;
    }
    else if (N < 10)
    {
        return 0;
    }
    else if ( N % 10 == 0)
    {
       return counterZero (N % 10) + 1; 
    }
    else 
    {
        return counterZero (N % 10);
    }
}
int main ()
{
    int num;
    cout << "PLZ Enter number: ";
    cin >> num;
    cout << "Number of zeros is: " <<counterZero (num);
}*/
/*
int oddnumbers , evennumbers;
int add (int start, int end)
{ 
    if (start > end)
    {
        return 1;
    }   
    if (start % 2 == 0)
    {
        evennumbers += start;
    }
    else
    {
        oddnumbers += start; 
    }
    return add (start + 1, end);
    
}
int main ()
{
    int num1 , num2;
    cout << "PLZ Enter start number is: ";
    cin >> num1 ;
    cout << "PLZ Enter end number is: ";
    cin >> num2 ;
   add (num1 , num2 );
    cout << "sum even numbers is: " << evennumbers;
    cout << "sum odd numbers is: " << oddnumbers;
}*/
/*
int func (int base , int Exponention)
{
    if (Exponention == 0)
    {
        return 1;
    }
    //int power = 1;

   // for (int i = 0; i < Exponention; i++)
    //{
      //  power *= base;

    //}
    return base * func (base , Exponention-1);
}
int main ()
{
    int n , m;
    cout << "PLZ Enter base: " << endl;
    cin >> n;
    cout << "PLZ Enter Exponention: "<< endl;
    cin >> m;
    cout << "Result: " << func (n,m) << endl;

}*/
/*int fact (int n)
{
    int res = 1;
    for (int i = 1; i <= n ; i++)
    {
        res = res * i;
    }
    //if (n == 0)
    //{
       // return 1;
    //}
    return res;
   // return n*fact(n-1);
}
int main ()
{
    int a , b , c;
    int res;
    cout << "PLZ Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "factorial a is: " <<fact (a) << endl;
    cout << "factorial b is: " <<fact (b) << endl;
    cout << "factorial c is: " <<fact (c) << endl;
    res = fact (a) + fact (b) +fact (c);
    cout << res << endl;
}*/
int main ()
{
    int arr[] = {1,2,3,4,5};
    int temp , index;
    int len = sizeof(arr) / sizeof (int);
    cout << " Array before reverse" << endl;
    for (int i = 0 ; i < len; i++)
    {
        cout << arr[i];
    }
    cout << " Array before reverse" << endl;
    for (int i = 0 ; i < len/2 ; i++)
    {
        temp = arr[i];
        index = len - i -1;
        arr [i] = arr [index];
        arr [index] =temp;
        cout << arr[i];

    }
}
