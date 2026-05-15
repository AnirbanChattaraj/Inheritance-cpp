//Animal → Dog
#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"Animals are living creatures!"<<endl;
    }
};
class Dog:public Animal{
    public:
    Dog(){
        cout<<"Dogs have tail";
    }
};

int main(){
    Dog d1;
    
    
}