#include <iostream>
using namespace std;

int sumAll(int num[], int n)
{
   int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum = Sum + num[i];
    }

    return Sum ;
}

int main()
{
    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Sum of all array index value " << sumAll(num,size) << endl;
}