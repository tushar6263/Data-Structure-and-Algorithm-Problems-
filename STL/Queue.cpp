#include<iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("tushar");
    q.push("patel");
    q.push("is a coder");

    cout << "First Element--> " << q.front() << endl;

    q.pop();
    cout << "First Element--> " << q.front() << endl;

    cout << "Size of stack--> " << q.size() << endl;
     return 0;
}