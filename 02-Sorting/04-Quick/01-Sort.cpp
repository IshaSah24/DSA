#include <bits/stdc++.h>
using namespace std;



int partition(vector<int>& arr , int low,  int high){

	int i = low;
	int j = high;

	int pivot = arr[low];

	while(i < j ){

		while(i <= high && arr[i] <= pivot){
			i++;
		}

		while(j >= low && arr[j] > pivot ){
			j--;
		}
 		// if both  the while  conditions gets  false and still  i < j  that  means we have  found an  elements to  be swaped with to make left  portion smaller  and  right portion  greater
		if(i <  j ){
			swap(arr[j], arr[i]);
		}

  	}
  	// if both condition  keep  going on  true that  means we  are at -> "i > j" here, j crossed i so  swap  with the pivot  where  j  is
  	swap (arr[low] , arr[j]);
  	return j;
}

void QuickSort(vector<int>& arr, int low, int high){


	if (low >= high){
		return ;
	}
	int part = partition(arr,  low,  high);
	QuickSort(arr, low, part-1);
	QuickSort(arr,  part+1, high);
}

int main(){

	int n;
	cin >>  n;
	vector <int> arr (n);

	for (int  i=0; i<arr.size(); i++){
		cin >>  arr[i];
	}


	QuickSort (arr, 0,  n-1);



	for(int i=0; i < arr.size(); i++){
		cout <<  arr[i] << " ";
	}
	return  0;
}