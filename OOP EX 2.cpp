#include<iostream>
using namespace std;
class Complex {
private:
int real, imag;
public:
Complex(int r , int i ) {real = r; imag = i;}
Complex( ) {real = 0; imag = 0;};
Complex operator - (Complex obj)
{
    Complex res;
    res.real= real - obj.real;
    res.imag = imag - obj.imag;
    return res;

}
void print() { cout << real << " + i" << imag << endl; }
};
int main()
{
Complex c1(10, 5), c2(2, 4);
Complex c3 = c1 - c2; // An example call to "operator+"
c3.print();
}
