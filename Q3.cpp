//Person → Student
#include<iostream>
using namespace std;
class Person{
public:
    string name;

    void showName(){
        cout << "Name: " << name << endl;
    }
};

class Student : public Person{
public:
    int marks;
    void showMarks(){
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Student s1;
    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter marks: ";
    cin >> s1.marks;
    cout << "\nStudent Details:\n";
    s1.showName();
    s1.showMarks();
    return 0;
}