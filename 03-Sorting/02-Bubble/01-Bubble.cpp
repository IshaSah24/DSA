#include <bits/stdc++.h>
using namespace  std;

	void swap(int arr[], int n){
		int temp ;
	int  count = 0;
		for (int i = n-1; i>=1;  i--){
			for (int j=0;  j <= i-1; j++){
				if (arr[j+1] < arr [j] ){
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp ;
					count = 1;
				}

			}

			if (count == 0 ){
				return;
			}
		}
	}
int main () {
int arr[5] = {7, 19, 30, 80, 90};

	swap(arr, 5);



	for (int i=0; i <5; i++){
		cout <<  arr[i] << " " ;
	}
	cout << endl ;
		return  0;
}