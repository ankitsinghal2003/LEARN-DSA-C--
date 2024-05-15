#include<iostream>
#include<algorithm>
using namespace std;
 int missingnumbers(int arr[],int n){
    sort(arr ,arr+n);
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum^arr[i];
        // cout<<sum;
    }
    for(int j=0; j<=n; j++){
        sum=sum^j;
    }
    return sum;


    // cout<<sum;
    }
 
int main(){
    int arr[]={1,2,5,0,4};
    int n=5;
 int missing =  missingnumbers(arr, n);
    cout << "The missing number is: " << missing << endl;
    return 0;
}