//Animal → Mammal → Dog
#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal can eat"<<endl;
    }
};
class Mammal:public Animal{
    public:
    void walk(){
        cout<<"Mammal can walk"<<endl;
    }
};
class Dog:public Mammal{
    public:
    void bark(){
        cout<<"Dog can bark";
    }
};
int main(){
    Dog d1;
    d1.walk();
    d1.eat();
    d1.bark();
}