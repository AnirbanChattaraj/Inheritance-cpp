//Person + Employee → Manager
#include<iostream>
using namespace std;
class Person{
    public:
    void showName(){
        cout<<"Anirban Chattaraj"<<endl;
    }
};
class Employee{
    public:
    void showSalary(){
        cout<<"1000000"<<endl;
    }
};
class Manager:public Person, public Employee{
    public:
    void showDepartment(){
        cout<<"Tech Lead";
    }
};
int main(){
    Manager m;
    m.showName();
    m.showSalary();
    m.showDepartment();
}