#include<iostream>

using namespace std;

                FIND UNIQUE ELEMENT-->

// void unique_element(int arr[], int size){
//      int sum=0;
//    for(int i=0; i<size; i++){
   
//     sum=sum^arr[i];
//    }
//    cout<<sum<<endl;;
// }
      
// int main(){
//     int arr[]={2,3,4,5,2,4,3};
//     int size=7;
//     unique_element(arr,size);
// }


                   PRINT ALL PAIR OF GIVEN ELEMENTS-->

// void pair_element(int arr[],int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             for(int k=0; k<n; k++){
//             cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//         }
//     }
// }
// }
// int main(){
//     int arr[]={10,20,30};
//     int n=3;
//     pair_element(arr,n);
// }

                     print short 0's and 1's-->

//  int countingprinting(int arr[],int size){
//     int countZeroes=0;
//     int countOnes=0;
//     // int counttwos=0;
//     for(int i=0; i<size; i++){
//         if(arr[i] == 0)
//         countZeroes++;
//         else if (arr[i] == 1)
//             countOnes++ ;     
//     }
//     for(int i=0; i<countZeroes; i++){
//         cout<<arr[i]<<" ";
    
//     for(int j=i; j<countOnes; j++){
//         cout<<arr[j]<<" ";
//     }
//     } }
//     int main(){
//         int arr[]={0,1,1,0,0,1,1};
//         int size=7;
// countingprinting(arr,size);
// }

                    REVERSE AN AN INTEGER-->

// #include<limits.h>
// int main(){
//     int x=123;
//     int ans=0;
 
//     while(x!=0){
//            int digit=x%10;

//         ans = (ans*10) + digit;
//         x=x/10;
//     }
//     cout<<ans;
// }


                 Shift Array by 1(right side)-->

    //    int shiftarray(int arr[],int size){
    //     int temp=arr[size-1];
    //     for(int i=size-1; i>=1; i--){
    //         arr[i]=arr[i-1];
    //     }
    //     arr[0]=temp;

    //     for(int i=0;i<size; i++){
    //         cout<<arr[i]<<" ";
    //     }
    //    }
    //    int main(){
    //     int arr[]={10,20,30,40,50,60};
    //     int size=6;
    //      shiftarray(arr,size);
    //    // for(int i=0;i<size; i++){
    //    //     cout<<arr[i]<<" ";
    //    // }
    //    }

                          Shift array by 1(left side)-->

    // int  shiftarraybyleft(int arr[],int size){
    //     int temp=arr[0];
    //     for(int i=0; i<=size-1; i++){
    //         arr[i]=arr[i+1];
    //     }
    //     arr[size-1]=temp;
    //      for(int i=0;i<size; i++){
    //         cout<<arr[i]<<" ";
    //      }
    // }
    // int main(){
    //     int arr[]={10,20,30,40,50,60};
    //     int size=6;
    //      shiftarraybyleft(arr,size);
    // }

                         shift array by 2 digits(right)-->


//  int shiftarrayby2(int arr[],int size){
//         int temp1=arr[size-1];
//         int temp2=arr[size-2];
//         int temp3=arr[size-3];
//         for(int i=size-1; i>=3; i--){
//             arr[i]=arr[i-3];
//         }
//         arr[0]= temp2;
//         arr[1]=temp1;
//         arr[2]=temp3;

//         for(int i=0;i<size; i++){
//             cout<<arr[i]<<" ";
//         }
//        }
    //    int main(){
    //     int arr[]={10,20,30,40,50,60};
    //     int size=6;
    //      shiftarrayby2(arr,size);
    //    // for(int i=0;i<size; i++){
    //    //     cout<<arr[i]<<" ";
    //    // }
    //    }

