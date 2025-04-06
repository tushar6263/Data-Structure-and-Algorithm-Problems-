#include <iostream>
using namespace std;

int printSum(int arr[3][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

bool checkNumber(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                cout << "target is found";
                return true;
            }
        }
    }
    cout << "target is not found";
    return false;
}

int main()
{
    // 2D array
    int arr[3][4];
    // int arr[3][4] ={{1,11,111,1111} , {2,22,222,2222} , {3,33,333,3333} };

    // for input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // for print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << " Enter the element to search " << endl;
    int target;
    cin >> target;

    if (checkNumber(arr, target, 3, 3))
    {
        cout << " Element found " << endl;
    }
    else
    {
        cout << " Not Found" << endl;
    }

    printSum(arr, 3, 4);
    return 0;
}