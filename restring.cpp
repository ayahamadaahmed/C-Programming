#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"input the string";
    cin>>str;
    cout <<" the string entered is:"<<str;
    int len = str.length();
    cout << " the length of the string is:"<<len;
    string str1 = " softwaretestinghelp";
    if (str1==str)
    {
        cout<<"\nTwo strings are equal\n ";
    }
    else{
        cout<<"Two strings aren't equal\n";
    }
    str1.append(".com");
    cout<<"\n new str1:"<<str1;
    cout<<"\n the new len str1:"<<str1.length();

}