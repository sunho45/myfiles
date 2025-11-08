#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

class Base {
public:
    virtual ~Base() { cout << "Base 소멸자 호출\n"; }
    virtual void who() { cout << "Base\n"; }
};
template <typename T1 ,typename T2>

T2 add(T1 a , T2 b){


    return a+b;
}
class Derived : public Base {
    private :
    int data=90;
    public:
  
    void who() override { cout << "Derived\n"; }

    friend void test (Derived& d);
      virtual ~Derived()=default;
};
void test(Derived& d){
    cout<<d.data<<endl;
}
    
    int main() {
  
    return 0;
}

int main(){
vector<int> v={34,2,5,7,23,78,90,1,4};
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

}




}