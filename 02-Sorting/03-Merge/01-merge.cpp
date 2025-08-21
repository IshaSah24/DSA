#include <bits/stdc++.h>
using namespace std ;


void merge(int  arr[], int low ,  int mid, int high){
	// pointers to  merge two  hypothetical  arrays
	int left  =  low;
	int  right =  mid +1;

	vector <int>  temp;

	while (left <= mid && right <= high){
		if (arr[left] >= arr [right]){
			temp.push_back(arr[right]);
			right++;

		}else {
			temp.push_back(arr[left]);
			left++;
		}
	} 

	while(left <= mid){
		temp.push_back(arr[left]);
		left++;
	}

	while(right <=  high ){
		temp.push_back(arr[right]);
			right++;
	}


	//  copy  the  temp[]  into  arr[]
	for (int i = 0; i < temp.size();  i++ ){
		arr[low+i] = temp [i];
	}

}

void mergeSort(int arr[], int left,  int right){

	if (left  >= right){
		return;
	}

	int mid =  (left+right) / 2;

	mergeSort(arr, left, mid);
	mergeSort(arr,  mid+1, right);

	merge(arr,  left, mid, right);


}
int main  (){

	int n ;
	cin >> n;
	int arr [n];
	for (int i = 0 ; i<n; i ++){
		cin  >>  arr[i];
	}


	int left =  0;
	int  right = n-1;
	mergeSort(arr,left ,  right);

	for (int i = 0;  i< n ;  i++) {
		cout <<  arr[i] <<  " " ;
	}
	cout <<  endl ;

	return 0;

}