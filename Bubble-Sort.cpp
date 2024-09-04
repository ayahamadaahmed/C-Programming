#include <iostream>
using namespace std;
class Bubble_Sort
{
    private:
    int size;
    int *array;

    public:
    Bubble_Sort(int n)
    {
        size = n;
        array = new int [size];
    }


void read ()
{
    cout << "PLZ Enter\t" << size << "\tElements";
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }


}

void print ()
{
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << "\t";
    }

}
void bubble_sort_array()
{
    for (int i = size -1; i > 0; i--)
    {
        int max = array[0];
        for (int j = 1; j <= i; j++)
        {
            if (max > array[j])
            {
                array[j -1] = array[j];
                array [j] = max;
            }
            else 
            {
                max = array [j];
            }
        }
    }
}
};
int main ()
{
    Bubble_Sort obj (10);
    obj.read();
    cout << "The Elements before sort" <<endl;
    obj.print(); 
    obj.bubble_sort_array();
    cout << "The Elements after sort" <<endl;
    obj.print();
}