#include <iostream>

#include <math.h>
using namespace std;

// 1 -> prime number
// 0 -> Not prime number
// bool isPrime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (isPrime(n))
//     {
//         cout << "It is a prime number";
//     }
//     else
//     {
//         cout << "Not a prime number ";
//     }
// }

//-------------------find nth term of fibonacci series----------------------
// int nthFibonacci(int n){

//     if (n <= 1){
//         return n;
//     }

//     return nthFibonacci(n - 1) + nthFibonacci(n - 2);
// }

// int main(){
//     int n ;
//     cin>>n;
//     int result = nthFibonacci(n);
//     cout << result << endl;
// }

//--------------------------------Total number of set bits---------------------------
