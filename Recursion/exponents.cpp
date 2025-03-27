#include<iostream>
using namespace std;

int power(int a, int b){
   if(b==0){
    return 1;
   }
   if(b==1){
    return a;
   }
   int ans = power(a,b/2);
   if(b%2==0){
   return ans*ans;
   }
   if(b%2!=0){
    return a*ans*ans;
   }
}
int main(){
    int number;
    cin>>number;
    int powerofnumber;
    cin>>powerofnumber;
    cout<<power(number,powerofnumber);
     return 0;
}