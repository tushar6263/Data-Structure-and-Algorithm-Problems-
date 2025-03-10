#include <iostream>
using namespace std;

int main()
{
    int num = 3;
    int *p = &num;

    cout << "Value of num is " << *p << endl;
    cout << "Address of num is " << p << endl;
    cout << "size of pointer is " << sizeof(p) << endl;
    cout << "size of pointer is " << sizeof(*p) << endl;

    double num1 = 10.5;
    float val = 0;
    double *p1 = &num1;
    float *p2 = &val;

    // increase the value of num
    (*p)++;

    cout << "Value of num is " << *p << endl;
    cout << "Value of num1 is " << *p1 << endl;
    cout << "Value of val is " << *p2 << endl;
    cout << "Address of num1 is " << p1 << endl;
    cout << "size of pointer is " << sizeof(p1) << endl;
    cout << "size of pointer is " << sizeof(*p1) << endl;

    //copy the pointer
    double *q = p1;
    cout<<"value of q is "<<*q<<endl;

    
    return 0;
}