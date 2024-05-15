#include<iostream>
#include<algorithm>
using namespace std;
int Duplicatearray(int arr[],int n){
 sort(arr ,arr+n);
for(int i=0; i<n; i++){
    if(arr[i]==arr[i+1]){
        cout<<arr[i]<<" ";
}
}

}
int main(){
    int arr[]={4,3,2,7,8,2,3,1};
    int n=8;
     Duplicatearray(arr, n);
}