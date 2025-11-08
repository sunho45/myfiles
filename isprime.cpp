#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


void isprime(vector <int> &vec){
for(int p=2;p<=1000;p++){

for (int t=p*p;t<=1000;t+=p){


vec.at(t)=1;



}











}













}

int main(){
vector<int> vec(1001,0);
isprime(vec);
vec.at(0)=1;
vec.at(1)=1;
int number;
cin>>number;
if(vec.at(number)==1){
    cout<<"this number is not a prime"<<endl;
}
else{
     cout<<"this  is a prime"<<endl;
}



}