#include<iostream>
using namespace std;

void sayHello( string msg, string name, int age)
{
    cout <<msg<<" "<< name <<", \n";
    cout << name <<" \'s Age is: "<< age <<" \n";

}


int main()
{
    sayHello("Hello" , "Aya", 19);
    sayHello("Hello" , "mohamed", 13);
    sayHello("welcome" , "Ahmed", 16);


    return 0;
}
