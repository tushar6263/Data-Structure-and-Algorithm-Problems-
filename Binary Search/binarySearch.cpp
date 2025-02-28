#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{

    int even[] = {2, 4, 6, 8, 10, 14, 20};
    int odd[] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(even, 7, 4);
cout<<"Index of 4 is "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd,5,5);
    cout<<"Index of 5 is "<<oddIndex<<endl;
    return 0;
}