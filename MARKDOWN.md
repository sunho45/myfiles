 # ~~hello wrold~~
**from this time, we can explore our new research theme on padna. panda is living at china and regarded as a treasure of china.**

- chapter1
- chatper2
- chapter3
---
- [ ] studying markdown
- [x] studing html


[incheon](https://cyber.inu.ac.kr/)
<pre>#include <iostream>
using namespace std;
class Base{
    private:
         void show(){}
        virtual void end(){}

    public:
            virtual void power(){
                cout<<"딸랑딸랑"<<endl;
            }



};

class evolutoned : public Base{

    private:
    int id=10;
    void call(){
        Base::power();

    }
    public:
        void evolutioned_show() {
            cout<<this->id<<endl;
        }
        void printid(){
            cout<<id<<endl;
            call();
        }
        void end()override {
            cout<<
        }


        void power()override{
             cout<<"살랑살랑"<<endl;
        }
        void end(int a){
            cout<<"entered numer is:"<<a<<endl;

        }

};




int main(){

evolutoned e;
Base *b=&e;
b->power();
e.printid();
 evolutoned *t=dynamic_cast<evolutoned*>(b);








}</pre>
| 이름   | 나이 | 직업   |
|--------|------|--------|
| 홍길동 |  20  | 개발자 |
| 철수   |  25  | 디자이너 |

> 이 부분은 인용문입니다.
>> 중첩 인용도 가능합니다.
>>> gkgk

___
![apple](./apple.png)