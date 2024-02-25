# include<iostream>
using namespace std;

// // This program counts the number of zeroes and one's in an array. It uses a function called 'count'.
// void count(int  arr[], int size){
//   int zerocount=0;
//   int onecount=0;
//   for(int i=0;i<size;i++){
//     if(arr[i]==0){
//       zerocount++;
//     }
//     if(arr[i]==1){
//       onecount++;
//     }

// } 
// cout<<"Number of zeros: " <<zerocount<<endl;
// cout<<"Number of ones : " <<onecount<<endl;
// }
// int main(){
//   int arr[7]={0,0,1,0,1,0,1};
//   int size=7;
//   count(arr,size);
// }

/////// call by value
//    void value(int a){
//   a++;
//   a*=20;
//   //cout<<a<<endl;
//  }
//  int main(){
//   int ankit=5;
//   ankit++;
//   int man=value(ankit);
//   cout<<man<<endl;
//   cout<<"Value of a before calling is : "<<ankit<<endl;
//  }

 ////// call by reference

//  void refrence(int &m){
//   m++;
//   m*=19;
//   cout<<m+100<<endl;
//  }
//  int  main(){
//   int sunder=70;
//   sunder--;
//   sunder-=20;
//   refrence(sunder);
//   cout<<"Value of sunder after calling is : "<<sunder<<endl;
//  }

//// find unique  number or not

// int uniqueelement(int arr[],int n) {
//   int ans=0;
//   for(int i=0;i<n;i++) {
//     ans= ans^arr[i];
//   }
//   cout<<ans;
//   // return ans;

// }
// int main(){
//   int  arr[] ={34,67,89,34,67,67,12,19,12,19};
//   int n=10;
//  int m= uniqueelement(arr,n);
// // cout<<m;
// }

/// printing pair 

// void printpair(int arr[],int n) {
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout<<arr[i]<<","<<arr[j]<<endl;
//       }

//   }
// }
// int main(){
//   int arr[]={10,20,30};
//   int n=3;
//   printpair(arr,n);
// }

// void func(int*ptr1){
//   *ptr1 = *ptr1 + 1;
// }

// int main(){
//   int *ptr;
//   int a=5;
//   a=a+5;
//   *ptr = a;
//   func(ptr);
//   cout<<"In main function"<<*ptr<<endl;
// }

// void func(int &a1){
//   a1 = a1 + 1;
// }

// int main(){
//   int a=5;
//   func(a);
//   cout<<"In main function"<<a<<endl;
// }

// void func(int arr[]){
//   cout<<arr[0]<<" "<<arr[1];
// }

// int main(){
//   int arr[2] = {1, 2};
//   func(arr);
// }

