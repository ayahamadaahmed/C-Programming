#include <iostream>
using namespace std;
class Insertion
{
    private:
    int size ;
    int * array;
    public:
    Insertion (int n)
    {
        size = n;
        array = new int [size];
    }
    void read ()
    {
        cout << "PLZ Enter\t" << size << "\telements";
        for (int i = 0; i < size; i++)
        {
            cin >> *(array +i);
        }
    }
    void print ()
    {
        for (int i = 0; i < size; i++)
        {
            cout << *(array +i)<<"\t";
        }

    }
    void insertion_sort ()
    {
        int j , temp;
        for (int i = 1; i <= size -1; i++)
        {
            j = i;
        
        

         while (j > 0 && array[j] < array [j -1])
         {
            temp = array [j] ;
            array [j] = array [j-1];
            array [j-1] = temp;
            j--;
         }
        }

    }
};
int main ()
{
    Insertion obj (10);
    obj.read();
    cout << "Array before sorting "<<endl;
    obj.print();
    obj.insertion_sort ();
    cout << "Array after sorting "<<endl;
    obj.print();
    
}
