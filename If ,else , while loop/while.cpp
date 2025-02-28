#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:-";
    cin >> n;
    int i = 2;
    int sum = 0;
    //-------------------Print the counting----------------------------------
    //    while (n>=i)
    //    {
    //     cout<<i<<" ";
    //     i = i+1;
    //    }

    //----------------------sum of all number------------------------

    // while (n>=i)
    // {
    //     sum = sum+i;
    //     i = i+1;
    // }
    // cout<<"Sum of all number is:-"<<sum;

    //---------------------------Sum of even numbers----------------------
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 2;
    // }
    // cout << "Sum of all evn numbers:-" << sum;

    //--------------------Check Prime or not------------------------
    while(i<n){
        //Divide hogya , not prime
        if(n%i==0){
            cout<<"Not prime for "<<i<<endl;
        }
        else{
            cout<<"Prime for "<<i<<endl;
        }
        i= i+1;
    }
}