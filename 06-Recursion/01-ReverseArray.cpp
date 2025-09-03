#include <bits/stdc++.h>
using namespace std;

void reverseArray(int i, vector <int>& arr, int n) {
    if (i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);  // Corrected swap
    reverseArray(i + 1, arr, n);
}

void printArray(vector<int> & arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main() {

    vector <int> arr  = {2,4,7,2,6,8};
    int  n = arr.size(); 

    reverseArray(0, arr, n);  
    printArray(arr, n);       // Print reversed array

    return 0;
}



// NOTE  : 