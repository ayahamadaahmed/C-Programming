 #include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input n: ";
    cin >> n;

    int first;             
    cout << "No 1 is: ";
    cin >> first;
    int max = first;
    int min = first;

    for (int i=1; i<n;i++) 
    {
        int x;
        cout << "No " << i+1 << " is: ";
        cin >> x;
        first = x;         
        if (max < x)
        {
           max = x;
        }
        if (min > x)
        {
           min = x;
        }
    }
    cout << "max is: " << max << endl;
    cout << "min is: " << min << endl;
    cout << "mean is: " << (double) (max+min)/2 << endl; 
    cout << "range is: " << max - min << endl;

    return 0;
    
}   
