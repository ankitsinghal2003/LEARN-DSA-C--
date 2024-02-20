//Learn array 
//Arrays are used to store multiple values in a single variable.
#include <iostream>
using namespace std;

//printing  an array:
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10,20,30,40,50};
//     int n=5;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int n=10;
//     for(int i=0;i<n;i++){
//         cout<<"enter value"<<i<<" ";
//         cin>>arr[i];
//         arr[i]=2*arr[i];
//     }
//     for(int i=0;i<n;i++){

//     cout<<arr[i]<<" ";
//     }
//     }

// print sum of an array:
// int main() {
// int arr[7];
// int n=7;
// for(int i=0; i<n;i++){
//     cin>>arr[i];
// }
// int sum=0;
// for(int i=0;i<n;i++){
//     sum=sum+arr[i];
//  cout<<sum;
// }
// }

//Linear search in array:
int main(){
    int arr[5]={10,20,30,40,50};
    int target=50;
    int n=5;
    bool flag=0;
    for(int i=0; i<n;i++){
        if(arr[i]==target){
            flag=1;
        break;
        }
    }
    if (flag==1)
        cout<<"taget found at index"<<endl;
        else
        cout<<"target not found"<<endl;
    }
