#include <iostream>
#include <queue>
using namespace std;
int main(){
queue<int>q;
q.push(11);
q.push(13);
q.push(15);

cout<<"Size of a queue is: "<<q.size()<<endl;

q.pop();
q.pop();
q.pop();

cout<<"Size of a queue is: "<<q.size()<<endl;

if(q.empty()){
    cout<<"Queue is a empty "<<endl;
}
else{
    cout<<"Queue is a empty"<<endl;
}

}