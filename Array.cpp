# include <iostream>
using namespace std;
int main()
{
    //int score[3];
    //score [0] = 4;
    //score [0] += 7;
    //score [1] =score [0] -  2;
    //score [2] =  score [1] + 5*  score [0];
    //for ( int i = 0; i < 3; i++)
    //{
      //  cout << score[i] << " \n";
    //}
    //int arr[10];

    //for ( int i = 0; i < 10; i++)
    //{
        //arr[i]= 2 + 2*i;
    //}
    //cout << "PLZ Enter values";
    //for ( int i = 0; i < 10; i++ )
    //{
      //  cout<< "\n" << i << "\t" << arr[i] <<"\n";
    //}
  //  return 0;


  //compare between two array
  //int arr1[5] = {1, 2, 3, 4, 5};
  //int arr2[5] = {1, 2, 3, 4, 5};
  //bool arrayEqual = true;

  //int size1 = 5 , size2 = 5 , i=0 ;
  
  //if (size1 != size2 )
  //arrayEqual = false;

  //if ( arrayEqual == true && i < 5)
  //{
   // if ( arr1[i] != arr2[i])
    //arrayEqual = false;
    //i++;
  //}
  //if ( arrayEqual == true)
  //{
    //cout <<" the array are equal ";

  //}
  //else 
  //{
   // cout <<" the array aren't equal ";
 // }

 int arr [5] = {1, 2, 3, 4, 5};
 int temp , index;
 int length = sizeof (arr)/ sizeof (int);
 //for ( int i = 0; i < 5; i++)
 //{
   // cout << " PLZ Enter values: " ;
    //cin>>arr[i];
 //}
for ( int i = 0; i < length; i++)
{
    cout<< arr[i]<<"\t";

    //if (i < length-1 )
    //{
      //  cout<<",";
    //}
}
for ( int i = 0; i < length/2; i++)
{
    temp = arr[i];
    index = length - i - 1;
    arr[i]= arr[index];
    arr[index]= temp;
    cout << arr[index];
}
for( int i = 0; i < length; i++)
{
      cout<< arr[i]<<"\t";
}

  return 0;
}

