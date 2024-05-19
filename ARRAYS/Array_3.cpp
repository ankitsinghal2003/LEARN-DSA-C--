
                      /2D ARRAY------>>>

// #include<iostream>
// using namespace std;
// int main(){
//     int row=3;
//     int col=3;;
// int arr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };
//  for(int i=0; i<col; i++){
//     for(int j=0; j<row; j++){
//         cout<<arr[j][i]<<" ";
//  }
//  cout<<endl;
// }
// }

             2nd way to printing 2d array -->>

// #include <iostream>
// using namespace std;
 
// // Driver code
// int main()
// {
//     //  int i = 3, j = 3;
//     int arr[][4] = {{1, 2, 3,10},
//                     {4, 5, 6,20},
//                     {7, 8, 9,30}
//                     };

//     for (auto &row : arr)
//     {
//         for (auto &column : row)
//         {
//             cout << column << " ";
//         }
//         cout << endl;
//     }
// }

             linear search in 2d array-->>


// #include<iostream>
// using namespace std;

// void searching(int arr[4][3],int row,int col,int target){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]==target){
//                 cout<<"Element found at "<<i<<","<<j;
//                 }
//                 }
//                 }

// }
// int main(){
//     int row=4;
//     int col=3;
//     int arr[4][3]={
//         {10,20,30,},
//         {40,50,60,},
//         {70,80,90,},
//         {100,200,300}
//     };
//     int target=90;
//      searching(arr, row, col,target);
// }

               Find maximum and minium value in 2d array-->

//  #include<iostream>
//  # include<limits.h>
// using namespace std;

            form maximum value-->>

// int maximum_number(int arr[4][3],int row,int col){
//     int max= INT_MIN;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//         }
//     }
//     return max;
// }

             for minimum value-->>

// int miniimum_number(int arr[4][3],int row,int col){
//     int min= INT_MAX;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j]<min){
//                 min=arr[i][j];
//             }
//         }
//     }
//     return min;
// }


// int main(){
//     int row=4;
//     int col=3;
//     int arr[4][3]={
//         {10,20,30,},
//         {40,500,60,},
//         {70,80,90,},
//         {100,200,300}

// };
// int ans=maximum_number(arr,row,col);
// cout<<ans;
// }

               Sum row and coloum wise in 2d array--->>

// #include<iostream>
// using namespace std;

// int sum_rowwise(int arr[4][3],int row,int col){
 
//     for(int i=0; i<col; i++){
//            int sum=0;
//         for(int j=0; j<row; j++){
//             sum=sum+arr[j][i];
//         }
//          cout<< sum<<endl;
//                 }
//                 }

// int main(){
//     int row=4;
//     int col=3;
//     int arr[4][3]={
//         {4,4,4},
//         {3,3,3},
//         {2,2,2},
//         {1,1,1}
//     };
//     sum_rowwise(arr,row,col);
// }


                     Print sum of Diagonal

// #include<iostream>
// using namespace std;
// int sum_diagonal(int arr[3][3],int row,int col){
//         int sum=0;
//         for(int i=0; i<row; i++){
//                 sum=sum+arr[i][i];
//         }
//         return sum;
// }

             print sum of reverse diagonal


// int reversediagonal(int arr[ ][3],int row,int col){
//         int sum=0;
//         for(int i=0; i<row; i++){
//                 for(int j=col-1; j>=0; j--){
//                 sum=sum+arr[i][j];
//                 }
//         }
//         return sum;
// }


// int main(){

//         int row=3;
//         int col=3;
//         int arr[3][3]={
//                 {4,4,4},
//                 {3,9,3},
//                 {1,1,1}
//                 };
//      cout<<sum_diagonal(arr,row,col)<<endl;
//     cout<< reversediagonal(arr,row,col)<<endl;
// }