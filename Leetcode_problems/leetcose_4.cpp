// Median of 2 shorted array--->>


//    solve by merged shorted array-->

#include<iostream>
#include<algorithm>
using namespace std;
double medianarray(int n1[], int n2[], int size) {
    int merged[size * 2];
    for (int i = 0; i < size; i++) {
        merged[i] = n1[i];
    }
    for (int i = 0; i < size; i++) {
        merged[size + i] = n2[i];
    }
    sort(merged, merged + size * 2);
    int start = 0;
    int end = size * 2 - 1;
    int mid = (start + end) / 2;
    if (size * 2 % 2 == 0) {
        return (merged[mid] + merged[mid - 1]) / 2.0;
    } else {
        return merged[mid];
    }
}

int main() {
    int n1[] = {1, 2, 3};
    int n2[] = {2, 3, 6};
    int size = 3;
    cout << "Median: " << medianarray(n1, n2, size) << endl;
    return 0;
}


// solve by binary search method-->

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int>k;
    for(int i=0; i<nums1.size(); i++){
        k.push_back(nums1[i]);
    }
    for(int j=0; j<nums2.size(); j++){
        k.push_back(nums2[j]);
    }

    sort(k.begin(),k.end());
        int n = k.size();
        if(n % 2 == 0) {
            return (k[n/2 - 1] + k[n/2]) / 2.0;
        } else {
            return k[n/2];
        }
  }

int main() {
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {5,6};
    double ans=findMedianSortedArrays(nums1, nums2);
    cout<<ans;
}