#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()

{
    /*char s1 [] = "Ahmed";
    char s2 [4] = "Ali";
    //strcat (s1 , s2);
    strcmp (s1 , s2);
    if (s1 == s2)
    {
        cout << "strings are equal";
    }
    else
    {
        cout << "strings are not equal";
    }
    int len = strlen (s1);
    //strcpy (s1 , s2);
    cout << len;
    string name , fname ;
    cout << "Enter name";
    getline (cin , name);
    cout << "enter fname ";
    cin >> fname;
    cout << "Name: " <<name;
    cout <<"fname: " <<fname;

    string str1 = "apples";
    string str2 = "APPLES";
    for (char &c : str1)
    {
        c = toupper (c);

    }
    for (char &w : str2)
    {
        w = tolower (w);
    }

    cout << str2 << endl;
    cout << str1 << endl;
    string test = "test sentence";
    int len ;
    len = test.length();
    cout << len << endl;
    string str = "softwaretestinghelp";
    if (str == test)
    {
        cout << "strings are equal" << endl;
    }
    else 
    {
        cout << "strings arenot equal" << endl;
    }
    string str1 = ".com";
    str.append (str1) ;
    cout << str << endl;
    len = str.length();
    cout << len << endl;
*/
int max = 5;
string names [max];
cout << "PLZ Enter 5 names: ";
for(int i = 0; i < max; i++)
{
    cin >> names[i];
}

for (int i = 0; i < max; i++)
{
    names[i][0]=toupper(names[i][0]);
    cout << names[i] << endl;
}
}
