#include<iostream>
using namespace std;
/*int main ()
{
    /*int arr[10];
    for (int j =0; j < 10; j++)
    {
        arr[j] = 2+ 2*j;
    }
    for ( int j = 0; j < 10; j++ )
    {
        cout << "\t"<< j <<"\t"<<arr[j]<<"\n";
    }
    return 0;
    */



   /*int arr1[]={ 0, 1, 2, 3, 4, 5};
   int arr2[6];
   for ( int i = 0; i < 6; i++)
   {
    arr2[i]=arr1[i];
   }
   for ( int i = 0; i < 6; i++)
   {
    cout << arr2[i]<<"  ";
   }
   */


  /*
  int arr1 [5] = {1, 2, 3, 4, 5};
  int arr2 [5] = {1, 2, 3, 4, 5};
  bool arrayequal = true;
  int size1 = 5 , size2 = 5 , i = 0;
  if ( size1 != size2 )
  arrayequal = false;

  while ( arrayequal == true & i < 5)
  {
    if ( arr1[i] != arr2 [i])
    {
      arrayequal = false;
    }
    i++;
  }
  if ( arrayequal == true)
  cout << " array is equal";
  else 
  cout<< "array isn't equal ";
*/

/*int n ;
cout << " enter values";
cin>> n;
int first;
cout << " the first N is: ";
cin>> first;
int max =first;
int min =first;
for ( int i = 1; i < n; i++)
{
    int x;
    cout <<" N "<< i+1 << "is";
    cin>> x;
    first = x;
    if(max < x)
    {
        max = x;
    }
    if(min > x)
    {
        min = x;
    }

}
cout << " the maximum value is:"<<max<<endl;
cout << " the minimum value is:"<<min<<endl;
cout << "mean is: " << (double) (max+min)/2 << endl; 
cout << "range is: " << max - min << endl;

*/

/*int arr[5]={ 1, 2, 3, 4, 5};
int length = sizeof (arr) / sizeof (int);
for ( int i = 0; i < length; i++ )
{
    cout<<arr[i];
    if (i < length -1 )
    {
        cout <<", ";
    }
}*/
/*
int arr1[]= {1, 2, 3, 4, 5};
int length = sizeof (arr1) / sizeof (int);
int temp , index;
for ( int i = 0; i < length; i++)
{
    cout << arr1[i]<<"\t"<<endl;

}
for ( int i = 0; i < length/2; i++)
{
    temp = arr1[i];
    index = length - i - 1;
    arr1[i] = arr1[index];
    arr1[index] = temp;
    
}
for ( int i = 0; i < length; i++)
{
   cout << arr1[i]<<"\t";
}
*/
/*
int arr[3][5];
int transpose [5][3];
cout << "PLZ Enter the matrix";
for ( int i = 0; i < 3; i++)
{
    cout << " PLZ Enter values of rows:"<< i <<endl;
    for (int j = 0; j < 5; j++)
    {
        cout << "PLZ Enter values of columns:"<< j <<endl;
        cin>>arr[i][j];
    }
}
for ( int i = 0; i < 3; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cout << arr[i][j]<<"\t";

    }
    cout<<"\n";

}
for ( int i = 0; i < 3; i++)
{
    for (int j = 0; j < 5; j++)
    {
        transpose[j][i] = arr [i][j] ;

    }
    

}
for ( int i = 0; i < 5; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << transpose[i][j]<<"\t";

    }
    cout<<"\n";

}
*/
/*
int arr1 [3][5];
int arr2 [3][5];
int sum [3][5];
cout << " the first matrix is: ";
for ( int i = 0; i < 3; i++)
{
    cout <<"PLZ Enter the values of rows: "<<i<<endl;
    for ( int j = 0; j < 5; j++)
    {
        cout <<"PLZ Enter the values of columns: "<<j<<endl;
        cin>>arr1[i][j];
    }
}

cout << " the second matrix is: ";
for ( int x = 0; x < 3; x++)
{
    cout <<"PLZ Enter the values of rows: "<<x<<endl;
    for ( int y = 0; y < 5; y++)
    {
        cout <<"PLZ Enter the values of columns: "<<y<<endl;
        cin>>arr2[x][y];
    }
}
cout << " the first matrix is: ";

for ( int i = 0; i < 3; i++)
{
    for ( int j = 0; j < 5; j++)
    {
        cout<<arr1[i][j]<<" ";
    }
    cout <<endl;
}
cout<<" the second matrix is:";
for ( int x = 0; x < 3; x++)
{
    for ( int y = 0; y < 5; y++)
    {
        cout<<arr2[x][y]<<" ";
    }
    cout <<endl;
}
cout<<" the sum of the two matrices is: "<<"\n";
for ( int a = 0; a < 3; a++)
{
    for ( int b = 0; b < 5; b++)
    {
        sum[a][b]= arr1[a][b] + arr2[a][b];
        cout << sum [a][b]<<" " ;
    }
}
*/



/*int fact (int n)
{
    if ( n==0 || n==1 )
    {
        return 1;
    }
    return n*fact(n-1);

}*/

