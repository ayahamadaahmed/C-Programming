#include <iostream>
using namespace std;
int main ()
{
    int array [10] = {-10 , -3 , 7 , 12 , 13 , 18 , 20 , 22 , 24 , 25 };
    int key;
    cout << " PLZ Enter number of Key: ";
    cin >> key;
    int high = 9; 
    int low = 0;
    
    while (low <= high)
    {
        int middle = (low + high)/2;
        if (array[middle] == key)
        {
            cout <<" Index of Key is: " << middle << endl;
            return 0;
        }
        else if (array[middle] < key)
        {
            low = middle + 1;
        }
        else 
        {
            high = middle -1;
        }
    }
    cout<<" Key is not found";
    return -1; 
 
}
