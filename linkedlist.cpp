#include <iostream>
#include <queue>
#include <vector>
#include <list>
#include <deque>

#include <set>
#include <map>

using namespace std;

int main(){
list<int> li;
li.push_back(2);
li.push_front(3);
li.push_back(2);
li.push_front(3);
li.pop_front();
li.pop_back();
int size=li.size();
for(int i=0;i<size;i++){
    cout<<li.front()<<endl;
    li.pop_front();
}



li.push_back(2);
li.push_front(3);
li.push_back(2);
li.push_front(3);
li.reverse();
for(int i=0;i<4;i++){
    cout<<li.front()<<endl;
    li.pop_front();
}

}

/*mp it 반복자로 어떻게 value값을 유도해야하나*/
/*size는 삽입을 하거나 삭제할시 값에 영향이 가니 주의해야함*/
/*dq의 insert의 pos에는 주소값을 넣어야함*/