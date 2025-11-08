#include <iostream>

using namespace std;

class character {
protected :
int hp;
int mp;

public:
    character(int hp,int mp):hp(hp),mp(mp){};
    int gethp() const{return hp;};
    int getmp() const{return mp;}
    void heal(int amount){
        hp+=amount;
        cout<<"current hp:"<<hp<<endl;

    }
    virtual ~character()=default;




 

};

class warrior final:private character{





public:
warrior(int h,int m): character(h,m){}

void attack (int damage){

hp-=damage;
cout<<"current hp:"<<hp<<endl;





}






void healwarrior(int hp){
    character::heal(hp);
    cout<<this->hp<<endl;
}


};
class Box {
private :
int width;
public:
 friend void showwidth(Box &b);

};
 void showwidth(Box &b){
    cout<<b.width<<endl;
 }
// 클래스 바깥 함수이지만 private 멤버 접근 가능


int main(){





}

