#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class sorting
{
    public:
    void bubble (int arr[], int size)
    {
        int max;
        for (int i = size - 1; i > 0; i--)
        {
           max = arr[0];
        
          for (int j = 1; j <= i ; j++)
          {
            if (max > arr[j])
            {
                arr[j-1] = arr [j];
                arr[j] = max;

            }
            else 
            {
                max = arr [j];
            }
         }
        }    
    }   
    void insertion (int arr[] , int size)
    {
        int j;
        int temp;
        for (int i = 1; i <= size -1 ; i++)
        {
            j=i;
            while(j > 0 && arr[j-1]> arr[j])
            {
                temp = arr[j];
                arr[j] = arr [j-1];
                arr [j-1] = temp;
                j--;
            }
        }
    }
    void selection (int arr[] , int size)
    {
        int temp;
        for (int i = 0 ; i <size -1; i++)
        {
            int min = i;
            for (int j =i+1; j < size; j++)
            {
                if(arr[j]<arr[min])
                {
                    min = j;
                }
                temp = arr [min];
                arr[min] = arr [j];
                arr [j] = temp; 

            }
        }
    }
};
int main ()
{
    sorting obj;
    int size = 1000000 ;
    int *arr = new int[size];
    srand(time(0));
        for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000000 + 1;
    }

    clock_t startTime = clock();
    obj.bubble (arr, size);
    clock_t bubbleSortTime = clock() - startTime;

    startTime = clock();
    obj.selection(arr, size);
    clock_t selectionSortTime = clock() - startTime;

    startTime = clock();
    obj.insertion (arr, size);
    clock_t insertionSortTime = clock() - startTime;

    std::cout << "Bubble Sort time: " << bubbleSortTime << std::endl;
    std::cout << "Selection Sort time: " << selectionSortTime << std::endl;
    std::cout << "Insertion Sort time: " << insertionSortTime << std::endl;
    delete[] arr;

    return 0;

}

