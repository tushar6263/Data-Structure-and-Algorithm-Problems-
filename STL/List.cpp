#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    cout << "Size of list " << l.size() << endl;

    l.push_back(4);
    l.push_front(2);
    l.push_front(3);
    cout << "Size of list " << l.size() << endl;

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of list " << l.size() << endl;

    return 0;
}