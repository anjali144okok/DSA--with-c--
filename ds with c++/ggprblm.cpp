 /*Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

Examples:

Input: arr[] = [1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0]
Output: 3
Explanation: There are 3 0's in the given array.
Input: arr[] = [0, 0, 0, 0, 0]
Output: 5
Explanation: There are 5 0's in the array.*/ 


#include <iostream>
using namespace std;
#include <vector>
int main() {
    int arr[100];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array (0's and 1's): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
        int s = 0, e = n - 1;
        int firstZero = n;   // assume no zero
        
        while (s <= e) {
            int m = s + (e - s) / 2;
            
            if (arr[m] == 0) {
                firstZero = m;   // possible first zero
                e = m - 1;       // search left
            } else {
                s = m + 1;
            }
        }
        
        return n - firstZero;
    }
