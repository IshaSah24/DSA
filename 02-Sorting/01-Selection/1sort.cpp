#include<bits/stdc++.h>
using  namespace std;


	void swap  (int arr[], int  i, int min){
		int temp;

		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp ;

 	}	

	void sortElements(int arr[], int size){


		for (int  i = 0 ; i <= size-2; i++){
			int min  = i ;
			for (int j = i+1; j < size; j++){
				if  (arr[min]  >  arr[j]){
					min = j;
				}
			}

			//swaping
			swap  (arr, i, min);
		}
	}





int main  (){

	int  size ;
	cin >> size;
	int  arr [size];
	for (int  i = 0; i<size;  i++){
		cin  >>  arr[i];
	}


	sortElements(arr, size);

		// print
	// cout <<  "after  sorting  ...."<<  endl;
	for(int i = 0; i<size; i++){
		cout << arr[i] << " " ;
	}

	return 0;
}