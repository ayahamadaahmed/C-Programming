#include <iostream>
using namespace std;
///int add(int num)
//{
    //if (num == 0 )
    //{
       // return 0;
    //}
    //cout << num <<"\n";
    //cout<<" ===== \n";
    //return num + add ( num - 1);

//}
// 5 + add (4)
// 5 +(4 + add (3)) 
// 5 + (4 + ( 3 + add (2)))
// 5+ ( 4 + ( 3 + ( 2 + add (1))))
// 5+ ( 4 + ( 3 + ( 2 + (1+ add (0)))))

 int fact ( int num)
{
   if ( num ==0 || num == 1)
   {
        return 1;
    }
    cout << num<<"\n";
    cout<< " ======\n";


   return num *fact( num -1) ;
 }
int main()
{
   // cout<< fact (5);
   int num;
   cout<<" PLZ Enter value of num ";
   cin >> num;
   cout << fact (num);
    return 0;
} 

// fibonacci series 

/*int fib ( int num)
{
    if ( num == 0 )
    
     return 0;

    
     else if ( num == 1)
    
     return 1;
    
     else 
     return fib (num-1) + fib (num-2);
    
}

int main()
{
    cout << fib(6);
    return 0;
}*/

