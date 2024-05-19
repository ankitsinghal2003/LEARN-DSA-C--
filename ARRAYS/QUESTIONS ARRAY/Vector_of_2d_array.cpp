#include<iostream>
#include<vector>
using namespace std;
int main(){

    //          print a 2d array--->

    vector< vector<int> >arr(5, vector<int>(10,2));
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
    }
cout<<endl;
    }
}

//                  jagged array-->>

vector<vector<int> >brr;

vector<int> a(10,0);
vector<int> b(14,02);
vector<int> c(6,-1);
vector<int> d(12,33);
vector<int> e(9,-2);
vector<int> f(15,25);


brr.push_back(a);

brr.push_back(b);

brr.push_back(c);

brr.push_back(d);

brr.push_back(e);

brr.push_back(f);

 for(int i=0; i<brr.size(); i++){
        for(int j=0; j<brr[i].size(); j++){
            cout<<brr[i][j]<<" ";
    }
cout<<endl;
    }
}