#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

static int N,M;

void backtracking(int level,vector<int> &arr,vector<bool> &visited,int previous,vector<int> input){
if(level==N){
    for(int i=0;i<N;i++){

        cout<<arr[i]<<" ";


    }
    cout<<"\n";
    return;
}
int previous_num=0;
for(int i=1;i<=M;i++){

if(!visited[i]){




if(previous<=input[i]){
arr[level]=input[i];
backtracking(level+1,arr,visited,input[i],input);


}











    
}

}
}

int main(){


cin>>M>>N ;



vector<bool> visited(10,false);
vector<int> input(M+1);
for(int i=0;i<M;i++){
cin>>input[i];

}
sort(input.begin(),input.end());
vector <int> arr(10,0);

backtracking(0,arr,visited,0,input);












}