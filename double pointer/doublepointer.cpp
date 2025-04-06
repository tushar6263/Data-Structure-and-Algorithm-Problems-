#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *ptr = &i;
    int **pr = &ptr;

    cout << i << endl;
    cout << *ptr << endl;
    cout << **pr << endl;
    return 0;
}