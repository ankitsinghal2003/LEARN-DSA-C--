#include<iostream>
using namespace std;


void printelements (int n ) {
    for(int i=0; i<n; i++){
        cout<<i<<endl;
    }
}

void printsum(int a, int b, int c){
    cout<<a+b+c;
}

int messagesend(int ms1,int ms2){
    ms1=ms1-ms2;
    return ms1;
}


int main() {
    // int n=19;
    printelements(19);

printsum(11,12,13);

int store= messagesend(12,2); 
cout<<store;
}



int x=10;
char ch='a';
x=x+ch;
cout<<x;
}


find max 0f 3 numbers
int findmax(int a,int b,int c){
    int max1= max(a,b);
    int finalmax=max(max1, c);
    return finalmax;
}

void counting(int n){
    for(int i=0;i<n; i++){
        cout<<i<<" ";
    }
}

void checkevenodd(int n){
    // if(num%2==0){
         if ((n ^ 1) == (n + 1)){
        cout<<"even";
    }
    else
    cout<<"odd";
}

bool checkprimeornot(int n){
     bool flag = true;
    for(int i=0; i<n; i++){
        if(n % i == 0)
            {
            flag = false;
            break;}
        }


       if(flag == true){

        cout<<"yes";
       }
       else{
        cout<<"no";
       }
    }
bool isPoweroftwo(unsigned int x){
    return(!(x&(x-1)));
}

void fun(int &num, int k){
    num &=(~(1<<k));
}

int main(){
int ans= findmax(772,4,80);
cout<<ans;


counting(9);

checkevenodd(99);

checkprimeornot(78);

if(~0==1)
cout<<"yes";
else
cout<<"no";

int x=-5;
x=x>>1;
cout<<x<<endl;
return 0;
double x=1.2;
int sum=(int)x+1;
cout<<sum;
int x=10;
char y='a';
x=x+y;
cout<<x;
int x=2;
int x=(x<<1)+x+(x>>1);
cout<<x;

bool isPoweroftwo(unsigned int x){
    return(!(x&(x-1)));
}
cout<< isPoweroftwo(0);
int num=7;
int k=1;
fun(num,k);
cout<<num<<endl;

#include<iostream>
using namespace std;

int main() {
	double width, height;
	cin >> width >> height;
	int area = width * height;
	cout << area << endl;
	return 0;
}
