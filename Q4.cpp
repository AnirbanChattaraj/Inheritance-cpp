//Shape → Rectangle
#include<iostream>
using namespace std;
class shape{
    public:
    void display(){
        cout<<"This is shape"<<endl;
    }
};
class Rectangle:public shape{
    public:
    int area(int l,int b){
        return l*b;
    }
};

int main(){
    Rectangle a;
    a.display();
    cout<<"Area is:"<<a.area(2,4);
    

}