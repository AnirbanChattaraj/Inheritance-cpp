//Shape → Circle & Rectangle
#include<iostream>
using namespace std;
class Shape{
    public:
    void display(){
        cout<<"This is Shape";
    }
};
class Circle:public Shape{
    public:
    int areaCircle(int r){
        return 3.14*r*r;
    }
};
class Rectangle:public Shape{
    public:
    int areaRectangle(int l, int b){
        return l*b;
    }
};
int main(){
    Circle c1;
    c1.display();
    cout<<"|Area of circle :"<<c1.areaCircle(2)<<endl;
    Rectangle r1;
    r1.display();
    cout<<"|Area of rectangle:"<<r1.areaRectangle(2,3);
}