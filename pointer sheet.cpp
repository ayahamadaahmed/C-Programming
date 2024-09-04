#include <iostream>
using namespace std;
void func (int n , int *ptr)
{
    int max = 0;
    int min = 1;
    for (int i = 0; i < n; i++)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr+i);
        }
        if (min > *(ptr + i))
        {
            min = *(ptr + i);
        }
    }
    cout << "maximum value is: " << max << endl;
    cout << "minimum value is: " << min << endl;
}
int main ()
{
    int num;
    cout << "Enter size of array: " << endl;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }
    func (num , arr);

}