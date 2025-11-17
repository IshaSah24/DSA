#include<bits/stdc++.h>
using namespace std;

// way 1  : take temp variable arr[0] and add at  the end
// way 2 : rotate  0 - k-1 and rotate k - n
  	 // - and rotate  again  from  the i = 0 to  n 

// COPLEXITY  	:
// 		we  are  modifying  the array  itself  so 
// 		space  -  O(n)
// 		Time complexity - O(n)


// Modify  the array start from  1 index
// and store 0th index in  temo  variable 
// at  the end of the index store  that  temp var

	void solve (vector<int> & arr, int times) {

		while(times > 0){
				int temp = arr[0];
				// [2,4,5,7, -> _]
				for (int i = 1; i<arr.size(); i++){
					arr[i-1] = arr[i];
				}
		
				arr[arr.size()-1] = temp ;

				times--;
		}

	}


int main (){
	vector<int> arr = {1,2,4,5,7};

	solve (arr,2);

	for (int x : arr) {
		cout << x <<  " ";
	}

	return 0;
}