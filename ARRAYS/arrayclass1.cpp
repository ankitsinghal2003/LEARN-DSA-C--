# include<iostream>
#include<limits.h>
using namespace std;

// This program counts the number of zeroes and one's in an array. It uses a function called 'count'.
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

// //printing three no in an array
// void printtriple(int arr[], int n){
//     for(int  i=0;i<n;i++){
//         for(int j=0;j<n;j++){ 
//             for(int k=0;k<n;k++){
//                 cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//             }
//         }
// }
// }
// int  main(){
//     int arr[]={10,20,30};
//     int  n=3;
//     printtriple(arr,n);
// }

// // Shorted array 
// // // shoted 0's and 1's in an array
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
//   }

//   int i;
//     for(i=0;i<zerocount;i++){
//         arr[i]=0;
//     }
//     for(int j=i; j<size; j++){
//         arr[j]=1;
//     }
// }
 

// int main(){
//   int arr[7]={1,0,1,0,1,0,1};
//   int size=7;
//   count(arr,size);
// for(int i=0;i<size;i++) {
//     cout<<arr[i]<<" ";
// }
// }


///////////////2D ARRAY
//////////////ROWWISE ACCESS
// void print2d(int arr[][4],int row,int coloumb){
//    for (int i = 0; i < row; i++){
//         for (int j = 0; j < coloumb; j++){
//             cout << arr[i][j] << " ";
//         }cout << endl;
// }}
// int main(){
//     int arr[][4]={
//         {1,2,3,4} ,
//         {5,6,7,8},
//         {9,10,11,12}
// };
// int row=3;
// int column=4;
// print2d(arr,row,column);
// }

// ////////////////COLWISE ACCESS
// void print2d(int arr[3][4],int row,int coloumb){
//    for (int i = 0; i < coloumb; i++){
//         for (int j = 0; j < row; j++){
//             cout << arr[j][i] << " ";
//         }cout << endl;
// }}
// int main(){
//     int arr[3][4]={
//         {1,2,3,4} ,
//         {5,6,7,8},
//         {9,10,11,19}
// };
// int row=3;
// int column=4;
// print2d(arr,row,column);
// }

/////////////////searching in 2d array
// void print2d(int arr[3][4],int row,int coloumb,int target){
//    for (int i = 0; i < coloumb; i++){
//         for (int j = 0; j < row; j++){
//             if(arr[i][j]==target){
//                 cout<<"Element is found"<<endl;
//             }}}
//         cout<<"element not found"<<endl;
//         }
        
// int main(){
//     int arr[3][4]={
//         {1,2,3,4} ,
//         {5,6,7,8},
//         {9,10,11,19}
// };
// int row=3;
// int column=4;
// int target=11;
// print2d(arr,row,column,target);
// }

///////////////////MAX NO IN AN 2D ARRAY
//  int maxin2darray(int arr[3][4],int row,int coloumb){
//     int maxans=INT_MIN;
//    for (int i = 0; i < row; i++){
//         for (int j = 0; j < coloumb; j++){
//             if(arr[i][j]>maxans){
//                 maxans=arr[i][j];
//             }
//             }
//             }
//             return maxans;
//  }
             
        
// int main(){
//     int arr[3][4]={
//         {1,2,3,4} ,
//         {5,6,7,8},
//         {9,100,11,19}
// };
// int row=3;
// int column=4;
// cout<<maxin2darray(arr,row,column);
// }

/////////////////////SUM COLOUMB WISE
//  int sumin2darray(int arr[2][2],int row,int coloumb){
//     int sum=0;
//    for (int i = 0; i <coloumb; i++){
//         for (int j = 0; j < row; j++){
//             sum=sum+arr[j][i];
//  }}
//  return sum;
// }
             
        
// int main(){
//     int arr[2][2]={
//         {1,2} , {5,6}
// };
// int row=2;
// int column=2;
// cout<<sumin2darray(arr,row,column);
// }
 
 ////////////////////Diagonal sum
// int diagonalsum(int arr[3][3],int row,int col){
// int sum=0;
// for(int i=0;i<row;i++){
//     sum=sum+arr[i][i];
// }
// return sum;
// }
// int main(){
//     int arr[3][3]= {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int row=3;
//     int col=3;
//     cout<<diagonalsum(arr,row,col)<<endl;
// }