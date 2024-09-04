#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    string gender;
    float salarymonth[3];
    float maxsalary;
    float avgsalary;
    Employee()
    {
        id = 0;
        name =" ";
        gender = "m";
    }

    void cal_maxsalary ()
    {
        for (int i = 0; i < 3; i++)
        {
            maxsalary = 0;
            if (maxsalary < salarymonth[i])
            {
                maxsalary = salarymonth[i];
            }
        }
    }
    void cal_avgsalary ()
    {
        avgsalary = 0 ;
        for (int i = 0; i < 3; i++)
        {
            avgsalary = salarymonth[i] + avgsalary ;
            
        }
        avgsalary = avgsalary/3;
    }

};
int main ()
{
    Employee emp[5];
    cout << "PLZ Enter Name , ID , Gender ,3 salarymonth: "<< endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> emp[i].id;
        cin >> emp[i].name;
        cin >> emp[i].gender;
        cin >> emp[i].salarymonth[0];
        cin >> emp[i].salarymonth[1];
        cin >> emp[i].salarymonth[2];
    }
    time_t currenttime;
    time (&currenttime);
    int starttime = currenttime;
    cout << starttime << endl;
    int total = 0;
    for (int j = 0; j < 2000000 ; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            emp[i].cal_maxsalary();
            emp[i].cal_avgsalary();
        }
    }
    time(&currenttime);
    int timeElipsed =(currenttime - starttime);
    cout << currenttime << endl;
    cout << timeElipsed << endl;
    return 0;
}