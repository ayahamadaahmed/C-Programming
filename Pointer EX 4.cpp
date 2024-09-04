#include <iostream>
using namespace std;
/*int main()
{
    int var =40;
    int *ptr;
    ptr = &var;
    cout <<" the value of var is: ";
    cout<< var <<"\n";
    cout<<" the address of var is: ";
    cout <<ptr<<"\n";
    cout <<" the value of the ptr is: ";
    cout <<*ptr<<"\n";
    return 0;

}*/
/*const int MAX = 3;
int main()
{
    int var [MAX]={10, 100, 200};
    int *ptr [MAX];
    
    for ( int i = 0 ; i < MAX; i++)
    {
        ptr[i]= &var[i];
    }
    for ( int i = 0 ; i < MAX; i++)
    {
        cout <<" value of var"<< i << "=" << "\n";
        cout << *ptr[i] <<"\n";
    }
}*/

//passing array
/*int getaverage ( int arr[], int size);

int main ()
{
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getaverage( balance , 5);
    cout<<" the average of array is "<< avg;
    return 0;
}


int getaverage ( int arr[], int size)
{
    int avg;
    double sum = 0;
    for ( int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    avg = double (sum)/ size;
    return avg;


}*/

int MAX = 3;
int main ()
{
    int var [MAX] = {10 , 100 ,200};
    int *ptr;

    int i = 0;
    ptr =  var;
    while ( ptr <= &var[MAX -1])
    {
        cout << "the address of var is : "<< '<<['<< i <<']'<<"\n" ;
        cout << ptr;
        cout << " the  value of var: ";
        cout<<*ptr<<endl;
        ptr++;
        i++;
    }

}
