#include<iostream>
using namespace std;



int linear (int *p , int key)
{
    for (int i = 0; i < 5 ; i++)
    {
        if (*p == key)
        {
            return i+1 ;

        } 
        p++;
    }
    return -1;
}
int main()
{
        int a[5];
    cout << "enter 5 nums";
        for (int i = 0; i < 5 ; i++ )
        {
            cin >> a[i];
        }
        cout << "enter key: ";
        int res;
        cin >> res;
        int x = linear (a, res);
        if ( x == -1)
        {
            cout << " not found";

        }
        else{
            cout <<"found";
        }

}

