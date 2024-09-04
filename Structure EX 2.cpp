#include <iostream>
#include <cstring>
using namespace std;
/*
struct Books
{
    char title [50];
    char author [50];
    char subject [100];
    int book_Id;

};
int main ()
{
    Books Book1;
    Books Book2;
    //Book 1 specification
    strcpy ( Book1.title , "Learn c++ code" );
    strcpy ( Book1.author, "John Adriano" );
    strcpy ( Book1.subject , "c++ code" );
    Book1.book_Id = 220201023;

    //Book 2 specification
    strcpy ( Book2.title , "Mathematics" );
    strcpy ( Book2.author, "Peter O'Neil" );
    strcpy ( Book2.subject , "Matrices" );
    Book2.book_Id = 103456778;

    cout << " Tile of Book1 is: " << Book1.title << endl;
    cout << " Author of Book1 is: " << Book1.author << endl;
    cout << " Subject of Book1 is " << Book1.subject << endl;
    cout << " Book_Id of Book1 is " << Book1.book_Id << endl;
    cout << " Title of Book2 is " << Book2.title << endl;
    cout << " Author of Book2 is " << Book2.author << endl;
    cout << " Subject of Book2 is " << Book2.subject << endl;
    cout << " Book_Id of Book2 is " << Book2.book_Id << endl;


}*/
/*
struct distance_type 
{
    float feet;
    float inches;
};
distance_type add (distance_type d1 , distance_type d2)
{
    distance_type result;
    result. feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    return result;
}
int main ()
{
    distance_type x , y , z;
    cout << "Enter 1st distance: \n";
    cin >> x.feet >> x.inches;
    cout << "Enter 2nd distance: \n";
    cin >> y.feet >> y.inches;
    z = add (x , y);
    cout << z.feet << "  " <<z.inches << endl;

}*/
struct student
{
    int Id;
    float score;
    char grade;
};
int main ()
{
    student cs [3];
    cout << "Enter student: ";
    for (int i = 0; i < 3; i++ )
    {
        cin >> cs[i].Id;
        cin >> cs[i].score;
        cin >> cs[i].grade;
    }
    for (int i = 0 ; i < 3; i++)
    {
        if (cs[i].score <= 50)
        {
            cout << "student Id is: " << cs[i].Id << "\n";
        }
    }
}
