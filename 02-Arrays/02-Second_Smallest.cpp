#include<bits/stdc++.h>
using namespace std;


// int largest(int arr[], int n){
// 	int  large = arr[0];
// 	for (int i=0; i<n; i++){

// 		if (arr[i] > large){
// 			large = arr[i];
// 		}
// 	}

// 	return  large;
// }

int main (){

	/* Better -  Approach  1 
	 find the  'largest'  first then, O(n)
	 sSmall  should  be geater then  '[i]' but smaller than the  'largest' O(n)
	 Ultimately we can  find the second 'largest' TC - O(2N) */

	int arr[] = {1,2,4,7,7,5};
	int sSmall = INT_MIN; // Asuming the  array  contains nagetive integers so  took  the smallest to track (-)


	// int large = largest(arr,6);
	// cout <<  large;

	

	// for (int  i=0;  i<6; i++){
	// 	if (arr[i] >  sSmall &&  arr[i] != large){
	// 		sSmall = arr[i];
	// 	}
	// }



	/* Optimal - Approach 2
	 finding the largest  and secondSmallest  togeher so  TC - O(n) */

	int large  = arr[0];
	int n =  sizeof(arr) / sizeof(arr[0]);

	for  (int  i = 1;  i<n ;  i++){
		if(arr[i] >  large){
			sSmall =  large;
			large =  arr[i];
		}

		else if (arr[i] != large && arr[i] > sSmall ){
			sSmall = arr[i];
		}
	}



	cout << sSmall;
	cout <<  endl;
	return 0;
}