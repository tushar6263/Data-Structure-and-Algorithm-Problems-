#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {1, 3, 5, 7};
    // cout << "Address of Zeroth array index is " << arr << endl;
    // cout << "Value of Zeroth array index is " << arr[0] << endl;
    // cout << "value of first  array index is " << arr[1] << endl;
    // cout << "value of second  array index is " << arr[2] << endl;

    //     // using the pointers
    // cout << "Address of Zeroth array index is " << &arr << endl;
    // cout << "Value of Zeroth array index is " << *(arr) << endl;
    // cout << "value of first  array index is " << *(arr + 1) << endl;
    // cout << "value of Second  array index is " << *(arr + 2) << endl;


    // int temp[10];
    // cout<<"Size of a temp array "<<sizeof(temp)<<endl;
    // int *ptr = &temp[0];
    // cout<<"Size of a zeroth index of temp  array "<<sizeof(ptr)<<endl;
    // cout<<"Size of a zeroth index of temp  array "<<sizeof(*ptr)<<endl;
    // cout<<"Size of a zeroth index of temp  array "<<sizeof(&ptr)<<endl;


    // int array[10] ={2,4,6,8};
    // cout<<array<<endl;
    // cout<<&array[0]<<endl;
    // cout<<&array<<endl;

    //  int *p = &array[0];
    //  cout<<p<<endl;
    //  cout<<&p<<endl;
    //  cout<<*p<<endl; 

    char ch[10] = "abcde";
    cout<<ch<<endl;
    char *c =&ch[0];
    cout<<c<<endl;



    return 0;
}