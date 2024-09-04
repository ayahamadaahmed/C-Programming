#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    string text = "Welcome to c++ Language";
    int len;
    len = text.length();
    cout << len << endl;
    size_t pos = text.find ("c++");
    if (pos != string::npos)
    {
        text.replace (pos, 3 ,"java");
        cout << text << endl;
    }
    else 
    {
        cout << "not found";
    }
    cout << text << endl;
    for (int i = 0; i < len; i++)
    {
        text[i]=toupper(text[i]);
    }
    cout << text << endl;
}
