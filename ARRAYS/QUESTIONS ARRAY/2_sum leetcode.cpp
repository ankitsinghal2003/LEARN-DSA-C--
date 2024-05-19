#include<iostream>
using namespace std;

   void  sum2digit(int arr[], int n, int target) {
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i]+arr[j]==target){
             cout<<"found at"<<i<<","<<j;
            }
        }
    }
     cout<<"not found";

    }
int main(){
    int arr[]={2,3,4,5,6,7};
    int n=6;
    int target=9;
    sum2digit(arr, n , target);
}

