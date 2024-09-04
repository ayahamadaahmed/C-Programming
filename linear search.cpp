#include <iostream>
using namespace std;
class BinarySearch
{
private:
int size;
int* array;
public:
BinarySearch (int n){
size=n;
array= new int[size];
}
void read(){
cout<<"please enter"<<size<<
" elements";
for(int i=0;i<size;i++)
{
cin>>*(array+i);
}
}
void print(){
for(int i=0;i<size;i++){
cout<<*(array+i)<<"\t";
}
}
void Binary (int low , int high , int key)
{
    for (int i = 0; i < 3; i++)
    {
        int middle = (low + high)/2;
        if (array[middle] == key)
        {
            cout << "Number found at index: " << middle << endl;
            return;

        }
        else if (array[middle] > key)
        {
            high = middle - 1;
        }
        else if (array[middle] < key)
        {
            low = middle + 1;
        }
        cout << "number not found " << endl; 

    } 
}    

};
 
int main ()
{
    BinarySearch obj(5);
    obj.read();
    obj.print();
    int num;
    cout << "Enter key:";
    cin >> num;
    obj.Binary(0,5,num);
}  