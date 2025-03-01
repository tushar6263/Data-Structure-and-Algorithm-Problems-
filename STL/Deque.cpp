#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    cout << "size of d is :" << d.size() << endl;

    cout << "Print First Index Element " << d.at(1) << endl;

    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "Before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase " << d.size() << endl;
}