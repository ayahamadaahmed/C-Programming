#include<iostream>
using namespace std;
void fun(int *arr , int n, int *min , int *max)

{
    for (int i = 0; i < n; i++)
    {
        if(*min > *(arr + i))
        {
            *min = *(arr + i) ;
        }
        if(*max < *(arr + i))
        {
            *max = *(arr + i) ;
        }
    }

}
int main()
{
    int n;
    cout << " PLZ Enter numbers: ";
    cin >> n;
    if (n <= 0)
    {
        cout << " PLZ Enter a positive number: ";
        cin >> n;
    }
    int *arr = new int[n];
    for ( int i = 0; i < n; i++)
    {
        cin >> *(arr+i);
    }
    int *min =& arr[0];
    int * max = &arr[0];
    fun ( arr , n, min, max);
    cout << "The smallest value is"<< *min;
    cout << "The maximum value is"<< *max;
    delete [] arr;
    return 0;
}