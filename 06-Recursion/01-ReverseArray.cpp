#include <iostream>
using namespace std;

void reverseArray(int i, int arr[], int n) {
    if (i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);  // Corrected swap
    reverseArray(i + 1, arr, n);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main() {
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(0, arr, size);  
    printArray(arr, size);       // Print reversed array

    return 0;
}



NOTE  : 