// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

void sortedArray(int arr[],int size){
    int index=0;
    int left=0;
    int right= size-1;

    while(index<=right){
        if(arr[index]==0){
            swap(arr[index],arr[left]);
            left++;
            index++;
        }
        else if(arr[index]==2){
            swap(arr[index],arr[right]);
            right--;

    }
    else
    index++;

    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
     }
int main(){
    int arr[]={1,2,1,0,0,1,0,2};
    int size=8;
    sortedArray(arr,size);
}