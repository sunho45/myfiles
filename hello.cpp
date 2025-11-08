#include <vector>
#include <iostream>
using namespace std;
int main(){

int N;
cin>>N;
vector<int> a(N);
for(int i=0;i<N;i++){
cin>>a[i];



}
int count=0;
for(int i=0;i<a.size();i++){
    
    int soshu=0;
    bool issoshu= soshu==2;
for(int j=1;j<=a[i];j++){
    
if(a[i]%j==0){

    soshu++;
}

}
if(issoshu){
count++;

}





}





cout<<count<<endl;









}