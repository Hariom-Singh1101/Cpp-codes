#include <iostream>
using namespace std;

class employee
{
    public:
    string name;
    int salary;
    employee(string n, int s,int p)
    {
        this->name = n;
        this->salary = s;
        this->password=p;
    }
    void printdetails()
    {
        cout <<"The name of employee is " <<this->name <<" and the salary is "<<this->salary <<endl;
    }
    void GetPassword(){
        cout<<"your password is"<<this->password;
    }
    private:
    int password;
};

int main()
{
    employee har("Hariom", 2839,8798);
    har.printdetails();
    har.GetPassword();

    return 0;
}