#include<iostream>
using namespace std;

// //////////CALL BY VALUE-->


void callbyrefrence(int sundari){
    sundari*=5;
    sundari--;
    sundari/=2;
    cout<<sundari<<endl;;
}
// int main(){
//     int x=10;
//     x--;
//     x-=5;
//     callbyrefrence(x);
//     cout<<x<<endl;
// }

 ////////////PASS BY REFRENCE--->


 void passbyreference(int &nums){
    nums++;
    nums*=10;
    cout<<nums<<endl;

 }
// int main() {
//     int n=500;
//     n++;
//     passbyreference(n);
//     cout<<n<<endl;
// }


void passbyrefrence_2(int &b){
    b+=34;
    b--;
    cout<<b+4<<endl;
}

// int main(){
//     int a=9;
//      a++;
//      passbyrefrence_2(a);
//      cout<<a<<endl;
// }