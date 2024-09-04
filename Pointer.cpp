
#include<iostream>
using namespace std;
void f1(int *t , int *t2)
{
    
    *t+=*t2;
}
int main()
{
    int *p11 ,*p2, *p3 ;
    p11 = new int; p2 =new int;
    p3 = new int;
    *p11 =10;
    p3 = p11;
    *p2 =20;
    
    f1(p2,p3);
    cout<<*p11 << endl << *p2 << endl <<*p3<<endl;
    delete p11;
    delete p2;



}
