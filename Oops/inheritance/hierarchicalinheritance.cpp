#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Call the func1"<<endl;;
    }
};
class B : public A
{
public:
    void func2()
    {
        cout << "Call the func2"<<endl;;
    }
};
class C : public A
{
public:
    void func3()
    {
        cout << "Call the func3"<<endl;;
    }
};
int main()
{
    A Object1;
    Object1.func1();
    B Object2;
    Object2.func1();
    Object2.func2();
    C Object3;
    Object3.func1();
    Object3.func3();

    return 0;
}