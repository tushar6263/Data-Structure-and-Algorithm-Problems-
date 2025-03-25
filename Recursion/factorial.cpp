#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int smallproblem = factorial(n - 1);
    int largeproblem = n * smallproblem;
    return largeproblem;
}

int main()
{
    int n;
    cout << "Enter the number which one you find factorial:-";
    cin >> n;
    int ans = factorial(n);
    cout << "factorial of given " << n << " is:-" << ans;
    return 0;
}