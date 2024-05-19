#include<iostream>
using namespace std;

// int factorial(int n) {
//     if(n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// bool printprime(int n){
//     for(int i=2; i<n; i++){
//         if (n%i==0){
//             // cout << "Number is not a prime number";
//             // break;
//             return false;
//         }
//         else{
//         // cout<<i;
//          return true; 
//     }
//     }

// }

// // km int miles
// double convert_km_to_miles(float km) {
//     double miles = km * 0.621371;
//     return miles;
// }

// int pascaltriange(int n){
//     for(int i=0; i<=n; i++){
//         int c=1;
//         for(int j=1;j<=i;j++){
//             cout<<c<<" ";
//             c=c*(i-j)/j;
//             // return c;
//         }
//     }
// }`

int main() {
    // int n;
    // cin >> n;
    // cout << "Factorial of " << n << " is: " << factorial(n) << endl;



//    int ans= printprime(34);
//    if(ans == true)
//        cout<<"The number is prime."<<endl;
//    else
//        cout<<"The number is not prime."<<endl;
//     return 0;

// double ans= convert_km_to_miles(12.23);
// cout<<ans;
// int ans1= pascaltriange(10)
// cout<<ans1;
int n=7;
    for(int i=1; i<=n; i++){
        int C=1;
        for(int j=1;j<=i;j++){
            cout<<C<<" ";
            C=C* (i-j) /j;
            // return c;
        }
        cout<<endl;
    }
}