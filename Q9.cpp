//Camera + MusicPlayer → Smartphone
#include<iostream>
using namespace std;
class Camera{
    public:
    void clickPhoto(){
        cout<<"Photo Clicked"<<endl;
    }
};
class MusicPlayer{
    public:
    void playMusic(){
        cout<<"Music Playing"<<endl;
    }
};
class Smartphone:public Camera, public MusicPlayer{
    public:
    void call(){
        cout<<"Calling...";
    }
};
int main(){
    Smartphone m;
    m.clickPhoto();
    m.playMusic();
    m.call();
}