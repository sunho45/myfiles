#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int start,int end){
int mid=start+(end-start)/2;
int l1=mid-start+1;
int l2=end-mid;
vector<int> l(l1);
vector<int> r(l2);

for(int i=0;i<l1;i++){

l[1]=arr[start+i];


}
for(int i=0;i<l2;i++){

r[1]=arr[mid+1+i];


}
int left=0,right=0;
int standard=0;



while(left<l1&&right<l2){
if(l[left]<r[right]){
    arr[start+standard++]=l[left++];
}else{


    arr[start+standard++]=r[right++];
}




}

while(left<l1){
    arr[start+standard++]=l[left++];
}
while(right<l2){
    arr[start+standard++]=r[right++];
}

}


void mergesort(vector<int> &arr, int start,int end){

if(start<end){

int mid=start+(end-start)/2;
merge(arr,start,mid);

merge(arr,mid+1,end);




}







}




int main(){





















}
