#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int printTheNumber(int n) {

    if(n==0){
        return 0;
    }   printTheNumber(n-1);//head Recursion 1,2,3,4,5
    cout<<n<<endl;
     printTheNumber(n-1);//tail Recursion 5,4,3,2,1
  
   
}
int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
int fibbonacci(int n){

    if(n==0|| n==1){
        return n;
    }
        return fibbonacci(n-1)+fibbonacci(n-2);
}
int printsum(int n){

    if(n==1){
        return 1;
    } return n+printsum(n-1);//head Recursion 1,2,3,4,5
    
    
}
int main() {
    int ans2=printsum(20);
    cout<<"the sum of number is :"<<ans2<<endl;
    // int fib= fibbonacci(13);
    // cout<<"the fibbonacci of number is :"<<fib<<endl;
   // int ans = factorial(5);
    // printTheNumber(5);
    // int powers=power(5);
    // cout<<"the power of 5 is :"<<powers;
    
  //  cout << "factorial of number is :" << ans; // Corrected spelling here
    return 0;
}
