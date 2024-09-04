#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    string str1  = "Hi";
    int len = str1.length ();
    cout << len << endl;
    string text = "Welcom to c++";
    if (text == str1)
    {
        cout << "string are Equal"<<endl;
    }
    else
    {
        cout << "string are not equal"<<endl;
    }
    string str2 = "Welcome";
    string newstring = str1.append(str2);
    cout << newstring << endl;
    len = str1.length();
    cout << len << endl;
    string str3 = "good";
    newstring.insert(5,str3);
    cout << newstring << endl;
    len = newstring.length();
    cout << len << endl;
    cout << newstring << endl;


}