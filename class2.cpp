#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int salary;
    void printdetails()
    {
        cout<<"The name of employee is "<<this->name <<" and his salary is "<<this->salary <<"\n";
    }

};
int main()
{
    employee har;
    har.name="Hariom";
    har.salary=8978;
    har.printdetails();
    employee omu;
    omu.name="Omnisha";
    omu.salary=988676;
    omu.printdetails();
    return 0;
}