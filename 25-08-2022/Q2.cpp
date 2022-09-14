/*WAP to create a class employee having the name, age, id, department name and salary of the employee.
Assign the values for 2 employees and display them.
(1). First employees details are input by the user from keyboard at the time of creation.
(2). Second employee details are also input by the user from keyboard where the details are dynmically
initialised.*/

#include <iostream>
#include <string>
using namespace std;

class employee
{
    string name;
    int age;
    int id;
    string dept;
    int salary;
    public :
    employee()
    {
        cout << "Enter ID, Name, Age, Department name and Salary respectively :" << endl;
        cin >> id >> name >> age >> dept >> salary; 
    }
};

int main()
{
    employee e[2];
    return 0;
}