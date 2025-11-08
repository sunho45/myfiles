#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class account{
    private:
        int amount;
        string name;
    public:
        account(string name):amount(0),name(name){}

        void add(int addmoney){
            amount+=addmoney;
            cout<<"customer's money amount :"<<amount<<endl;
        }
        void withdraw(int minusmoney){
            if(amount-minusmoney<0){
                cerr<<"amount is insufficant"<<endl;
            }
            else{
                amount-=minusmoney;
            cout<<"customer's money amount :"<<amount<<endl;
            }
            
        }

        void transmit(string numberofaccount,int transmitamount){
            cout<<"보내실분의 계좌번호가"<<numberofaccount <<"가 맞습니까?"<<endl;
            if(amount-transmitamount<0){
                cerr<<"잔액이 부족합니다."<<endl;


            }else{
                amount-=transmitamount;
                cout<<"상대방에게로 "<<transmitamount<<"원이 이체되었습니다"<< "현재 남은 잔액은"<< amount<<"원입니다"<<endl;
            }





        }




};


int main(){
account *ac;
int number;
switch(number){
    cout<<"입금을 하실거면 1,출금을 하실거면 2, 이체를 하실거면 3번을 눌러주세요."<<endl;
case 1:
  cout<<"입금하실 금액을 입력해주세요"<<endl;
  int number;
    cin>>number;
    ac->add(number);
    break;
  case 2:
    cout<<"출금하실 금액을 입력해주세요"<<endl;
  int number;
    cin>>number;
    ac->withdraw(number);
    break;
    case 3:
            cout<<"이체하실 금액과 상대방의 계좌번호를 입력해주세요"<<endl;
  int number;
  string id;

    cin>>number>>id;
    ac->transmit(id, number);
    break;




}




}