//Person → Student & Teacher
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    void showName(){
        cout<<"Name:"<<name<<endl;
    }
};
class Student:public Person{
    public:
    int marks;
    void showMarks(){
        cout<<"Marks:"<<marks<<endl;
    }
    
};
class Teacher:public Person{
    public:
    string subject;
    void showSubject(){
        cout<<"Subject:"<<subject;    }
};
int main(){
     Student s1;
    s1.name = "Anirban";
    s1.marks = 95;

    s1.showName();
    s1.showMarks();

    cout<<endl;

    Teacher t1;
    t1.name = "Rahul Sir";
    t1.subject = "Mathematics";

    t1.showName();
    t1.showSubject();
   
}