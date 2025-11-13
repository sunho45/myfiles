#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <math.h>
int main()
{
  int N;
  cin>>N;
vector<int> a(N);
vector<int> b(N);
for(int i=0;i<N;i++){
  cin>>a.at(i);
}
for(int i=0;i<N;i++){
  cin>>b.at(i);
}
  sort(a.begin(),a.end());
  sort(b.begin(),b.end(),greater<>());
  int n=0;
   for(int i=0;i<N;i++){
    n+=a.at(i)*b.at(i);
   } 

   int nl=0;
cout<<n<<endl;






    
}

/*
dp[0]=1;
dp[1]=1;

*/