#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;
    double weight;

public:
    string getname()
    {
        return this->name;
    }
    int setage(int a)
    {
        this->age = a;
    }
};

// inherit from human class
class Male : public Human
{
public:
    string color;
    void sleep()
    {
        cout << "Male is Sleeping" << endl;
    }
};

int main()
{
    Male object1;
    cout << object1.age << endl;
    cout << object1.name << endl;
    cout << object1.weight << endl;
    object1.setage(10);
    cout<< object1.age<<endl;
    cout << object1.color << endl;
    object1.sleep();
    return 0;
}