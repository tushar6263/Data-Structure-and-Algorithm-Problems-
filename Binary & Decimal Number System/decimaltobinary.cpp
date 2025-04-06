// C++ program to convert a decimal
// number to binary number

#include <iostream>
#include <algorithm>
using namespace std;

// function to convert decimal to binary
string decToBinary(int n) {
    string bin = "";
    
    while (n > 0) {
        int bit = n%2;
          bin.push_back('0' + bit);
        n /= 2;
    }
  
    reverse(bin.begin(), bin.end());
    return bin;
}

int main() {
    int n;
    cout<<"Enter your decimal number:- ";
    cin>>n;
    cout << decToBinary(n);
    return 0;
}

