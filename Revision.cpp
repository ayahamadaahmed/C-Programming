#include<iostream>
using namespace std;
void read (int *p , int n)
{
    for (int i =0; i < n; i++)
    {
        cin>>*(p+i);
    }
}
void print ( int *p ,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i)<<endl;
    }
}
void add ( int *p1 ,int *p2 ,int *p3 , int n)
{
    for (int i =0; i < n; i++)
    {
        *(p1+i)=*(p2+i)+*(p3+i);

    }
}
int main()
{
    int a[10], b[10], c[10] , res1[10], res2[10], res3[10];
    int n;
    cout <<"enter values of a";
    read ( a , n) ;
    cout <<"enter values of b";
    read ( b , n) ;
    cout <<"enter values of c";
    read ( c , n) ;
    add( a, b,res1,10);
    add( a, c,res2,10);
    add( c, b,res3,10);
    cout <<" a+b ="<<endl;
    print (res1, 10);
    cout <<" a+c ="<<endl;
    print (res2, 10);
    cout <<" c+b ="<<endl;
    print (res3, 10);
    return 0;


}
