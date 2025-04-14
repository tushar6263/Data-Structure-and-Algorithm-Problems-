#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};
 class Human{
    public:
    int age;
    string gender;

    void speak(){
        cout<<"speaking"<<endl;
    }
 };

 class Hybird : public Animal , public Human{

 };
int main(){
      Hybird H;
      H.speak();
      H.bark();
     return 0;
}