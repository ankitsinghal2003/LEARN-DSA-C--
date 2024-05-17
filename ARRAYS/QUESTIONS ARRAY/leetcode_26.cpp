///  Remove Duplicate in an shorted array

// method_1-->

#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int n) {
    if (n == 0) 
    return 0;
    
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1; // New length of array without duplicates
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int newLength = removeDuplicates(nums, n);
    
    // Print the array elements up to the new length
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}



// method_2-->

// #include <iostream>
// using namespace std;

// int removeDuplicates(int nums[], int n) {
//     if (n == 0 || n == 1) {
//         return n;
//     }
//     int i = 0;
//     for (int j = 1; j < n; j++) {
//         if (nums[i]!= nums[j]) {
//             i++;
//             nums[i] = nums[j];
//         }
//     }
//     return i + 1;
// }

// int main() {
//     int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     int new_n = removeDuplicates(nums, n);
//     cout << "The new array is: ";
//     for (int i = 0; i < new_n; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }