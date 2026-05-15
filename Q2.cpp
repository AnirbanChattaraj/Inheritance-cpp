//Vehicle → Car
#include<iostream>
using namespace std;
class Vehicle{
    public:
    void start(){
        cout<<"Vehicle  started"<<endl;
    }
};
class Car:public Vehicle{
    public:
    void musicSystem(){
        cout<<"Music System ON";
    }
};

int main(){
    Car c1;
     c1.start();
     c1.musicSystem();
}