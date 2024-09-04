#include <iostream>
using namespace std;
class Triple__Sorting
{
    private:
    int size;
    int *array;
    public:
    Triple__Sorting (int n)
    {
        size = n;
        array = new int [size];

    }
    void read ()
    {
        cout<<"please enter  "<< size <<"  elements: ";
        for(int i=0;i<size;i++)
        {
            cin>>*(array+i);
        }
    }
    void print ()
    {
        for(int i=0;i<size;i++)
        {
            cout << *(array+i)<<"\t";
        }
    }
    void selection ()
    {
        for (int i = 0; i < size -1 ; i++)
        {
            int index = i;
            for (int j = i+1 ; j < size ; j++)
            {
                if(array[j] < array[index])
                {
                    index = j;

                }
                
            }

            int temp = array[i];
            array[i] = array[index];
            array[index] = temp;

        }
    }

    void Bubble ()
    {
        for ( int i = size - 1; i > 0; i-- )
        {
            int max = array[0];
            for ( int j = 1; j <= i; j++) 
            {
                if (max > array[j])
                 {
                    array[j-1] = array[j]; 
                    array[j]=max;
                } 
                else 
                {
                 max = array[j]; 
                }
            }
        }
    }
    void Insertion ()
    {
        int j,temp;
        for ( int i = 1; i <=size-1; i++ )
         {
            j=i;
            while((j>0)&&(array[j]<array[j-1]))
            { 
              temp= array[j];
              array[j]=array[j-1];
              array[j-1]=temp;
              j--;
            }
        }

    }

};
int main ()
{
    Triple__Sorting obj (5);
    obj.read() ;
    cout <<"array before sorting: "<<"\n";
    obj.print();
    obj.Insertion();
    cout <<"\n array after sorting: "<<"\n";
    obj.print();
    obj.Bubble();
    cout <<"\n array after sorting: "<<"\n";
    obj.print();
    obj.selection();
    cout <<"\n array after sorting: "<<"\n";
    obj.print();
}
