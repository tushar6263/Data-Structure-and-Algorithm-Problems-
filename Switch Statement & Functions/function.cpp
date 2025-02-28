#include <iostream>
using namespace std;

//-------------------Program take the number and power and give the ans----------------------------

// int power()
// {
//     int a, b;
//     cin >> a >> b;
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }

// int main()
// {
//    int ans = power();
//    cout<<"Answer is "<<ans<<endl;
// }

// ---------------------Check the number is  1-> even or 0->odd-------------
// int isEven(int a)
// {
//     if (a % 2 == 0)
//     {
//         // even
//         return 1;
//     }
//     else
//     {
//         // odd
//         return 0;
//     }
// }

// int main()
// {
//     int num;
//     cin >> num;
//     if (isEven(num))
//     {
//         cout << "Number is even";
//     }
//     else
//     {
//         cout << "Number is odd";
//     }
// }

//-------------------------Function return the ncr----------------------

// int fact(int n)
// {
//     int ans = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         ans = ans * i;
//     }
//     return ans;
// }

// int nCr(int n, int r)
// {
//     int num = fact(n);
//     int demon = fact(r) * fact(n - r);

//     int ncr = num / demon;
//     return ncr;
// }

// int main()
// {
//     int n, r;
//     cin >> n >> r;
//     cout << "Answer is " << nCr(n, r) << endl;
// }

//---------------------------Print the counting-----------------------------
   
    //  int Counting(int num){
    //     for(int i=0;i<=num;i++){
    //        cout<<i<<" ";
    //     }
    //     cout<<endl;
    //  }

    //  int main(){
    //     int num;
    //     cout<<"Enter the number";
    //     cin>>num;
    //     cout<<Counting(num);
    //  }