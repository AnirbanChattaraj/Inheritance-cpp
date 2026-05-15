//Vehicle → Car → SportsCar
#include<iostream>
using namespace std;
class vehicle{
    public:
    void start(){
        cout<<"Vehicle started"<<endl;
    }
};
class Car:public vehicle{
    public:
    void musicSystem(){
        cout<<"Music System ON"<<endl;
    }
};
class Sportscar:public Car{
    public:
    void turbo(){
        cout<<"Turbo Mode activated";
    }
};
int main(){
    Sportscar d1;
    d1.start();
    d1.musicSystem();
    d1.turbo();
}