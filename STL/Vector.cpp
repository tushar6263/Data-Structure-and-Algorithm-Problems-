#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 2);
    // Capacity define the memory allocate the vector
    cout << "Capacity:- " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity:- " << v.capacity() << endl;

    // Size define the memory use my vector
    cout << "Size:- " << v.size() << endl;
    v.pop_back();
    cout << "Size:- " << v.size() << endl;

    vector<int> a(5, 1);
    for (int i = 0; i <= 4; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
}