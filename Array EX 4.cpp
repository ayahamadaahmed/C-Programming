#include <iostream>
using namespace std;
int main ()
{
    int arr [20];
    int max ;
    int min;
    int avg = 0;
    cout<<" PLZ Enter values: ";
    cin >>arr[0];
    max = arr[0] ;
    min = arr[0];

    for ( int i = 0; i < 10 ; i++)
    {
        cin >> arr[i];   
        if ( arr[i] > max)
        {
            max = arr [i]  ;
        }
        if ( arr[i] < min)
        {
            min = arr[i] ;
        }
        avg += arr[i];
    }
    avg /= 20;

    cout << " The maximum is: "<<max;
    cout << " The minimum is: "<<min;
    cout << " The average is: "<<avg;
   
}
