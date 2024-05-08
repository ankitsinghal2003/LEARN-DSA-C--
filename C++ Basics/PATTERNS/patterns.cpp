#include<iostream>
using namespace std;

///////FULLY PRAMID
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         // now print space
//         for(int col = 0;col<n-row-1;col++)
//         cout<<" ";
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// }

///INVERTED PRAMID
// int main(){
//     cout<<"enter the value";
//     int n;
//     cin>>n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<row; col++){
//             cout<<" ";
//     }
//     for(int col=0; col<n-row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// }


//////INVERTED HOLLOW PRAMID
// int main(){
//     cout<<"enter the value";
//     int n;
//     cin>>n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<row; col++){
//             cout<<" ";
//     }
//     for(int col=0; col<n-row; col++){
//         if(col==0 || col==n-row-1){
//             cout<<"1 ";
//         }
//         else{
//             cout<<"  ";
//     }
//     }
//     cout<<endl;
// }
// }


/////////HOLLOW PRAMID
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         // now print space
//         for(int col = 0;col<n-row-1;col++)
//         cout<<" ";
//         for(int col=0;col<row+1;col++){
//             if(col==0 || col==row+1-1){
//                 cout<<"* " ;
//             }
//             else{
//                 cout<<"  ";
//             }
//             // cout<<"* ";
//         }
//         cout<<endl;
//     }

// }


/////////////
//  int main() {
//     int n=5;
//     // cin>>n;
//     for(int row=0;row<n;row++){
//         // now print space
//         for(int col = 0;col<2*row+1;col++){
//             if(col%2==0){
//                 cout<<row+1;
//             }
//             else{
//                 cout<<"*";
//             }

//     }
//     cout<<endl;
//     }
 
// for(int row=0;row<n;row++){
//         // now print space
//         for(int col = 0;col<n-2*row+1;col++){
//             if(col%2==0){
//                 cout<<row+n;
//                     }
//             else{
//                 cout<<"*";
//             }

//     }
//     cout<<endl;
//     }
//  }


// int main(){
//     int n=5;
//     for(int r=1; r<n;r++){
//         for(int c=1; c<r+1; c++){
//             char ch=c+'A'-1;    ////////////////this line is important.....
//             cout<<ch;

//         }
//         cout<<endl;
//     }
// }


int main(){
    int n=4;
    // cin>>n;
    for(int row =1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        for(int col=1; col<=(2*row)+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
for(int row=3; row<n; row++){
for(int col=0; col<n-row; col++){
    cout<<" ";
}
for(col=1;col)
}
}
// for(int )
// }
