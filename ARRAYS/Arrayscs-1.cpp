# include<iostream>
using namespace std;
// int main(){
    // int arr[13];
    // cout<<arr;

        printing of an array.


// int n=5;
// int sum=0;
// int arr[n];
// for(int i=0; i<n; i++){
//     cout<<"enter value"<<i<<" ";
//     cin>>arr[i];
//     cout<<endl;
// }
// cout<<"printing sum array"<<endl;
// for(int i=0; i<n; i++){
//     sum=sum+arr[i];
// }
// cout<<sum; 


          Linear search in array
         see to target found or not;


// int arr[]={2,4,6,8,10};
// int target=80;
// int n=5;
// bool isFound=false;
// for(int i=0; i<n; i++){
//     if(arr[i]==target){
//         isFound=true;
//         break; 
// }
// }
// if( isFound==true)
// cout<<"Target Found";
// else
// cout<<"Target Not Found";

         ARRAYS & _FUNCTION
        linear search in an array bu functions

// int searcharray(int arr[], int size, int target){
//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//         return true;
//         }
//     }
//       return false;

//     }
// // }

// int main(){
//     int arr[] = {3,7,9,11,15};
//     int size=5;
//     int target=9;
//     bool ans=searcharray(arr,size,target);
//     if(ans==1){
//         cout<<"Element Found";
//     }
//     else {
//         cout<<"Element Not Found";
// }

        COUNT 0'S AND 1'S in an array-->


// int counting(int arr[],int size){
//     int countZeroes=0;
//     int countOnes=0;
//     for(int i=0; i<size; i++){
//         if(arr[i] == 0)
//         countZeroes++;
//         else if (arr[i] == 1)
//             countOnes++ ;
//     }
//     cout<< countOnes<<endl;;
//     cout<< countZeroes;
//     }

//     int main(){
//         int arr[]={0,1,1,1,0,0,1,0};
//         int size=9;
// counting(arr,size);
// }


             INT_MIN, INT_MAX FIND CONCEPT-->

// #include<limits.h>
// int findmax(int arr[],int size){
//     int max = INT_MIN;
//     for(int i=0; i<size; i++){
//         if(arr[i]>max)
//         max = arr[i];
//     }
//     return max;
// }

// int main(){
//     int arr[]={2,4,52,-12,33,5};
//     int size=6;
//     int ans= findmax(arr,size);
//     cout<<ans<<endl;
// }

             REVERSE IN AN ARRAY-->

// int reversearray(int arr[], int size){
//     int left=0;
//     int right= size-1;

//         while(left <right ){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//         }
//         for(int i=0; i<=size; i++){
//             cout << arr[i] << " ";
//     }
// }
// int main(){
//     int arr[]= {10,20,30,40,50,60};
//     int size=6;
//     reversearray(arr,size);
//     // for(int i=0; i<size; i++)
// }


                 EXTREAME IN AN ARRAY-->

//  int extreme(int arr[], int size){
//     int left=0;
//     int right=size-1;
//     while(left<=right){
//         if(left==right){
//             cout<<arr[left]<<endl;
//         }
//         else{
//         cout<<arr[left]<<endl;
//         cout<<arr[right]<<endl;
//         }
//         left++;
//         right--;
//     }
//  }

//  int main(){
//     int arr[] ={9,8,7,6,5};
//     int size=5;
//     extreme(arr,size);
//  }

/////////////////END//////////////////////