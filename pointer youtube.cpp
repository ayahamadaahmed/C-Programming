#include <iostream>
using namespace std;
/*int arr[10];
void square()
{
    
    for (int i = 0; i < 10; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}

int main ()
{
    cout << "PLZ Enter values: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    square();
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;

}*/
/*void Reverse (int *ptr ,int n)
{
    for (int i = n - 1; i >= 0 ; i--)
    {
        cout << *(ptr + i)<<endl;
    }

}
int main ()
{
    int n;
    cout << "PLZ Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "PLZ Enter values of array"<<endl;
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    cout << "array before reverse"<<endl;
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i]<<endl;
    }
    cout << " Array after reverse"<<endl;
    Reverse (arr,n);
}*/
void Comp (int *ptr , int n)
{
    int min = *ptr ;
    int max = *ptr;
    
    for (int i = 0; i < n; i++)
    {
         if (max < *(ptr+i))
        {
           max = *(ptr+i);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(min > *(ptr+i))
        {
          min = *(ptr+i);

        }
    }
    cout << "the maximum is:"<< max << endl;
    cout << "The minimum is:" << min << endl;

}
int main ()
{
    int n;
    cout << "PLZ Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "PLZ Enter values of array"<<endl;
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i]<<endl;
    }
    Comp (arr,n);


}