#include <iostream>
using namespace std;
/*class Rectangle
{
private:
    float length;
    float width;
    public:
    void setLength(float len)
    {
        if(len >= 0) 
        {
            length = len;
        }
        else
        {
            cout <<"Error, PLZ Enter positive value";

        }
       
    }
    float getlength()
    {
        return length;
    }

    void setwidth(float wid)
    {
        if (wid >= 0)
        {
            width = wid;
        }
        else 
        {
            cout <<"Error, PLZ Enter positive value";
        }
    }
    float getwidth()
    {
        return width;
    }
    float getArea()
    {
        return length * width;
    }
} ;
int main()
{
    Rectangle box;
    box.setLength(40.5);
    box.setwidth(30.6);
    cout<<"The Area of Rectangle is: "<<box.getArea()<< endl;
    cout<<"length is: "<<box.getlength()<<"\n";
    cout<<"width is: "<<box.getwidth()<<"\n";


}*/
class Employee
{
    private:
    int EmployeeID;
    string EmployeeName;
    int hoursWork;
    int hourlySalary;
    int weeks;

    public:
    void setEmployeeID(int ID)
    {
        if (ID >= 0)
        {
        EmployeeID = ID;
        }
    }
    int getEmployeeID()
    {
        return EmployeeID;
    }
    void setEmployeeName(string Name)
    {
        EmployeeName = Name;
    }
    string getEmployeeName()
    {
        return EmployeeName;
    } 
    void sethoursWork(int hours)
    {
        if (hours >= 0)
        {
            hoursWork = hours;
        }
    }
    int gethoursWork()
    {
        return hoursWork;
    }

    void sethourlySalary(int salary)
    {
         if (salary >= 0)
        {
            hourlySalary = salary;
        }
    }
    int gethourlySalary()
    {
        return hourlySalary;
    }
    void setweeks (int num)
    {
        if (num >= 0)
        {
            weeks = num;
        }
    }
    int getweeks()
    {
        return weeks;
    }
    int getsalary()
    {
        return weeks * hourlySalary * hoursWork;
    }
};
int main()
{
    Employee emb1 , emb2;
    emb1.setEmployeeID(220201027);
    emb1.setEmployeeName("Aya");
    emb1.sethourlySalary(19);
    emb1.sethoursWork(40);
    emb1.setweeks(52);
    emb2.setEmployeeID(220201038);
    emb2.setEmployeeName("Ahmed");
    emb2.sethourlySalary(19);
    emb2.sethoursWork(20);
    emb2.setweeks(52);
    cout<<"Iformation of Employee 1 "<<endl;
    cout<<"Name's of Emlpoyee is: "<<emb1.getEmployeeName()<<endl;
    cout<<"ID's of Emlpoyee is: "<<emb1.getEmployeeID()<<endl;
    cout<<"The Hours work is:"<<emb1.gethoursWork()<<endl;
    cout<<"The weeks is:"<<emb1.getweeks()<<endl;
    cout<<"The Hourly Salary is:"<<emb1.gethourlySalary()<<endl;
    cout<<"The Employee's Salary is:"<< emb1.getsalary()<<"\n";
    cout<<"Iformation of Employee 2 "<<endl;
    cout<<"Name's of Emlpoyee is: "<<emb2.getEmployeeName()<<endl;
    cout<<"ID's of Emlpoyee is: "<<emb2.getEmployeeID()<<endl;
    cout<<"The Hours work is:"<<emb2.gethoursWork()<<endl;
    cout<<"The weeks is:"<<emb2.getweeks()<<endl;
    cout<<"The Hourly Salary is:"<<emb2.gethourlySalary()<<endl;
    cout<<"The Employee's Salary is:"<< emb2.getsalary()<<"\n";

    return 0;

}
