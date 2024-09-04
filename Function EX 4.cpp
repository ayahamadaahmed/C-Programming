#include<iostream>
using namespace std;
/*float Area (float R)
{
    float PI = 3.14;
    float area = 4* R * R* PI;
    return area;
}
float Volume (int R)
{
    float PI = 3.14;
    float VOL = 0.75 * R * R * R * PI;
    return VOL;

}
int main ()
{
    int Radius ;
    cout << " PLZ Enter value: ";
    cin >> Radius;
    cout << "The Area of sphere is: "<< Area ( Radius) <<endl;
    cout << "The Volume of sphere is: "<< Volume ( Radius) <<endl;

}*/
/*float sum (int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}
float avg (int n1, int n2, int n3)
{
    return (n1 + n2 + n3)/3;
}
int main ()
{
    int num1 , num2 , num3;
    cout<<" PLZ Enter 3 values: ";
    cin >> num1 >> num2 >> num3;
    cout<< " The sum of 3 values is: "<< sum (num1,num2,num3)<<endl;
    cout<< " The average of 3 values is: "<< avg (num1,num2,num3)<<endl;

}*/
/*global variables*/
/*
int x;
int y;
void add()
{
    int res;
    res = x + y;
    cout << " The add is: " << res <<endl;
}
void sub ()
{
    int res;
    res = x - y;
    int x;
    cout << "The sub is:" << res;
}
int main ()
{
    
    cout << "PLZ Enter two values: ";
    cin >> x >> y;
    add ();
    sub ();
    return 0;
}*/
/*local variables*/
/*int add (int x , int y)
{
    int res;
    res = x + y;
    return res;
}

int sub (int x , int y)
{
    int res;
    res = x - y;
    return res;
}
int main ()
{
    int a ,b ;
    cout<< " PLZ Enter 2 values:";
    cin>> a>>b;
    cout <<" The add is:"<< add(a,b) <<endl;
    cout <<" The sub is:"<< sub(a,b) <<endl;

}*/
/*void add ( int x , int y)
{
    int res ;
    res = x + y;
    cout << "The add is: "<< res;
}
void sub ( int x , int y)
{
    int res ;
    res = x - y;
    cout << "The add is: "<< res;
}
int main ()
{
    int x , y;
    cout << "PLZ Enter 2 values:";
    cin >> x >> y;
    add(x , y);
    sub(x ,y);
}*/
/*void test (int num)
{
    int flag = 0;
    for (int i = 2; i < num; ++i)
    {
        if (num %i == 0)
        {
            flag++;
            break;
        }
    }
    if (flag==0)
    {
        cout << "num is a prime";
    }
    else
    {
        cout << "num isn't a prime";
    }
}
int main ()
{
    int n;
    cout << "PLZ Enter a +ve number: ";
    if ( n < 0)
    {
        cout << " PLZ Enter a +ve number";
    }
    cin>> n;
    test (n);
    return 0;
}*/
/*
//float Area (float r)
void Area (float r)
{
    float area;
    area = r * r * 3.14;
    //return area;
    cout << " The Area of Circle is: "<<area << endl;
}
//float Parameter (float r)
void Parameter (float r)
{
    float par;
    par = 2 * r * 3.14;
    //return par;
    cout << "The Area of Circle is: "<< par <<endl;
}
int main ()
{
    int radius;
    cout<<"PLZ Enter the radius of circle: ";
    cin >> radius;
   // cout << "The Area of Circle is: "<<Area (radius)<<endl;
    //cout << "The Parameter of Circle is: "<<Parameter (radius)<<endl;
    Area (radius);
    Parameter (radius);
}*/

/*void add (int A , int B)
{
    int sum =0;
    for (int i = A; i <= B; i++)
    {
        sum += i;
    }
    cout << "The sum from " << A << " to " << B << " is " << sum <<endl ;
}
int main ()
{
    int start , end;
    cout << "PLZ Enter two values:"<<endl;
    cin >> start >> end;
    add(start ,end);

}*/
/*int func (int num)
{
    if (num == 0)
    {
        return 1;
    }
    else if (num < 10)
    {
        return 0;
    }

    else if (num % 10 ==0)
    {
        return func (num/10)+1;
    }
    else 
    {
        return func (num/10) ;
    }
}
int main ()
{
    int n ;
    cout << "PLZ Enter value:"<<endl;
    cin >> n;
    cout << "The number of zeros is " << func(n) <<endl;
}
*/
/*
int evensum;
int oddsum;
int sum_even_odd (int start , int end)
{
    
    if(start > end)
    return 1;
    if (start % 2 == 0)
    {
        evensum += start;
    }
    else 
    {
        oddsum += start;
    }
    return sum_even_odd(start+1,end);
}

int main ()
{
    int A,B;
    cout<<"PLZ Enter two values"<<endl;
    cin >> A >> B;
    sum_even_odd(A,B);
    
    cout<<"the sum of even numbers is " << evensum << endl;
    cout<<"the sum of odd numbers is " << oddsum << endl;
} */
/*
int add (int num)
{
    if (num == 1 )
    {
        return 1;
    }
    else{
    return num + add(num-1);
    }
}
int main ()
{
    int n;
    cout<< "PLZ Enter value: ";
    cin >> n;
    cout << add (n);
}
*/
/*int func (int n , int m)
{

    /*int power=1 ;
    for (int i = 0; i < m ; i++)
    {
        power *= n ;
    }
    return power;*/
    /*if (m==0)
    {
        return 1; 
    }
    return n*func(n,m-1);
}
int main ()
{
    int base , exponent;
    cout<<"PLZ Enter values:"<<endl;
    cin>>base>>exponent;
    cout<<func(base,exponent);
}*/

int fact (int num)
{
    /*if (num == 0 || num==1)
    {
        return 1;
    }
    else{
        return num * fact(num-1);
    }
    */
   int factorial =1;
   for (int i =1; i<= num; ++i)
   {
    factorial *= i;

   }
   return factorial;
}
int main()
{
    int a,b,c;
    cout<<"PLZ Enter 3 values:";
    cin>>a>>b>>c;
    cout <<fact(a)<<endl;
    cout <<fact(b)<<endl;
    cout <<fact(c)<<endl;
    cout <<fact(a) + fact(b) - fact (c) <<endl;
}

