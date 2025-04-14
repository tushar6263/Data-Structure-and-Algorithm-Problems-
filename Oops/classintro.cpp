#include <iostream>
#include <string.h>
using namespace std;

class Info
{

private:
    char name;

public:
    int age;
    char *surname;
    static int timeTOComplete;

    // getter and setter

    Info()
    {
        cout << "simple constructor called " << endl;
        surname = new char[100];
    }

    // Parameterised Constructor
    Info(char name)
    {
        cout << "this -> " << this << endl;
        this->name = name;
    }

    Info(char name, int age)
    {
        this->age = age;
        this->name = name;
    }

    // copy constructor
    Info(Info &temp)
    {
        char *ch = new char[strlen(temp.surname) + 1];
        strcpy(ch, temp.surname);
        this->surname = ch;

        cout << "called constructor" << endl;
        this->age = temp.age;
        this->name = temp.name;
    }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << " ,";
        cout << "Surname: " << this->surname << " ,";
        cout << "Age is " << this->age << " ,]";
        cout << endl
             << endl;
    }

    char getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }

    void setname(char n)
    {
        name = n;
    }

    void setage(int num)
    {
        age = num;
    }
    void setsurname(char surname[])
    {
        strcpy(this->surname, surname);
    }

    static int random()
    {
        return timeTOComplete ;
    }
    // destructor
    ~Info()
    {
        cout << "called a destructor" << endl;
    }
};

int Info ::timeTOComplete = 10;
int main()
{
    //    cout<<Info::timeTOComplete<<endl;
    cout << Info::random() << endl;

    //     //static
    //    Info a;

    //    //dynamic
    //     Info *b = new Info();
    //     //manually destructor call
    //     delete b;

    //      Info hero1;

    //     hero1.setage(12);
    //     hero1.setname('D');
    //     char surname[7] = "Babbar";
    //     hero1.setsurname(surname);

    //     //hero1.print();
    //   //use default copy constructor

    //     Info hero2(hero1);
    //    // hero2.print();

    //     hero1.surname[0] = 'G';
    //     hero1.print();
    //     hero2.print();

    // Info firstinfo;
    //  //cout<<"Address of firstinfo "<<&firstinfo<<endl;
    //  firstinfo.getname();

    //  //dynamically
    //  Info *n = new Info('A');

    //    //static allocation
    //    Info first;
    //    first.setage(10);
    //    first.setname('a');
    //    cout<<"Age of first is a "<<first.getage()<<endl;
    //    cout<<"Name of first is a "<<first.getname()<<endl;

    //    //Dynamic alloction
    //    cout<<endl<<endl;
    //    Info *second = new Info;
    //    second->setage(20);
    //    second->setname('b');
    //    cout<<"Age of first is a "<<second->getage()<<endl;
    //    cout<<"Name of first is a "<<second->getname()<<endl;

    // // create a object
    // Info first;
    // cout<<sizeof(first)<<endl;
    // // use getter
    // cout << "name is a " << first.getname() << endl;
    // cout << "age of first is a " << first.getage() << endl;
    // // use setter
    // first.setage(10);
    // first.setname('A');
    // cout << "age of first is a " << first.getage() << endl;
    // cout << "name is a " << first.getname() << endl;
    // return 0;
}