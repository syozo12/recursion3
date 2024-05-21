//Write a recursive function to reverse a number. 
//Avoid preceding 0s in the reversed number.
#include<iostream>
using namespace std;
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    int lastDigit=n%10;
    if( lastDigit != 0 || rev != 0){
        return reverse(n/10,(rev*10)+lastDigit);
        
    }
    return reverse(n/10,rev);
      
}
int main(){
    int n=0560;
    int rev=0;
    cout<<reverse(n,rev);
}
