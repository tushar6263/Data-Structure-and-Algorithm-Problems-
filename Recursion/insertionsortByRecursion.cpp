#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, int index = 1) {
    if (index >= n)
        return;

    int key = arr[index];
    int j = index - 1;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;

    insertionSort(arr, n, index + 1);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
