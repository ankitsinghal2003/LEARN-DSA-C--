#include<iostream>
using namespace std;
void shortcolour(int arr[],int size){
  int l=0;
  int m=0;
  int h=size-1;
  while(m<=h){
    if(arr[m]==0){
      swap(arr[l],arr[m]);
      l++;
      m++;
    }else if (arr[m]==1){
      m++;}
    //   else if(arr[m]==2){
        else{
        swap(arr[m],arr[h]);
        h--;
    }
  }
  //for(int i=0;i<size;i++){
    //cout<<arr[i]<<" ";
  }
int main(){
  int arr[]={1,0,2,0,2,1};
  int size=6;
//  for(int i=0;i<size;i++){
  //  cout<<arr[i]<<" ";
 // }
 // cout<<endl;
  shortcolour(arr,size);
  for(int i=0;i<size;i++) {
   cout<<arr[i]<<" ";
}
}