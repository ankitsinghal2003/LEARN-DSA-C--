# include<iostream>
using namespace std;

// This program counts the number of zeroes and one's in an array. It uses a function called 'count'.
void count(int  arr[], int size){
  int zerocount=0;
  int onecount=0;
  for(int i=0;i<size;i++){
    if(arr[i]==0){
      zerocount++;
    }
    if(arr[i]==1){
      onecount++;
    }

} 
cout<<"Number of zeros: " <<zerocount<<endl;
cout<<"Number of ones : " <<onecount<<endl;
}
int main(){
  int arr[7]={0,0,1,0,1,0,1};
  int size=7;
  count(arr,size);
}


