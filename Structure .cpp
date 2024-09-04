#include <iostream>
#include <string>
using namespace std;
struct Employee 
{
    int EMP_ID;
    char EMP_Name [50];
    float salary ;
};
void readData(Employee& emp)
{
    cout << "PLZ Enter Employee Id: ";
    cin >> emp.EMP_ID;
    cout << "PLZ Enter Employee Name: ";
    cin . ignore ();
    cin .getline(emp.EMP_Name, 50);
    cout << "PLZ Enter Employee salary: ";
    cin >> emp.salary;

}
bool search (Employee employees[] , int id , int size )
{
    for (int i = 0; i < size ; i++)
    {
        if (employees[i].EMP_ID == id)
        {
            cout << "Empkoyee found"<<endl;
            return true;
        }
        
    }
    cout <<"Employee not found"<<endl;
    return false;

}
int main ()
{
    int numEmployess = 20;
    Employee employees [numEmployess];

    for (int i = 0; i < numEmployess; i++)
    {
        cout << "Enter data for employee " << i + 1 << ":" << endl;
        readData(employees[i]);
    }
    int searchId;
    cout << "Enter the employee ID to search: ";
    cin >> searchId;
    if (search (employees, numEmployess, searchId)) {
        cout << "Employee with ID " << searchId << " found." << endl;
    } else {
        cout << "Employee with ID " << searchId << " not found." << endl;
    }

    return 0;
}
