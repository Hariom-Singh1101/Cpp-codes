#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;

};
int main()
{
    Employee har;
    har.name="Hariom";
    har.salary=333;
    cout<<"The name of employee is "<<har.name<<" and his salary is "<<har.salary;
    
    return 0;
}