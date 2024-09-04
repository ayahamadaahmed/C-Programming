#include<iostream>
using namespace std;
int main()
{
    int maxNames = 20;
    string names [maxNames];
    int numNames;
    cout<<"PLZ Enter 20 name: ";
    cin>>numNames;
    if (numNames < 1 || numNames > 20 )
    {
        cout << " the num of names mus be between 1" << maxNames <<"."<<endl;
        return 1;
    }
    for (int i = 0; i < numNames; i++)
    {
        cout<<"Enter name " << i+1<<":";
        getline (cin , names[i]);
        if (isalpha(names[i][0])) {
      names[i][0] = toupper(names[i][0]);
    }
    }
    cout <<" the names are: "<<endl;
    for (int i = 0; i < numNames; i++)
    {
        cout << names[i]<<endl;
    }

    

    

}