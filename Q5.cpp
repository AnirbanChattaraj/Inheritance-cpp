//Employee → Manager
#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    void showEmployee(){
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
};
class Manager:public Employee{
    public:
    string department;
    void showDepartment(){
        cout<<"Department:"<<department;
    }
};

int main(){
    Manager a1;
     cout << "Enter name: ";
    cin >> a1.name;
    cout << "Enter salary: ";
    cin >> a1.salary;
    cout << "Enter department: ";
    cin >> a1.department;
    cout << "\nManager Details:\n";
    a1.showEmployee();
    a1.showDepartment();

    
}