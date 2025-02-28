#include <iostream>
using namespace std;

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i]=temp;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    swapAlternate(arr,10);
    printArray(arr,10);
}