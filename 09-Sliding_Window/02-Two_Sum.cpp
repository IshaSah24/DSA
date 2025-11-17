// question  - find the two elements from  the given  array where  the sum  of the two element is == K

// appraoch 1
	// - we  can  fix  one element 'e' each  time and can  find the  other k-e value ====> O(n*n)

// appraoch 2 
	// - sort,  and  take  two pointer  approach  ===> O(n)   and sorting takes (n log n)

#include <bits/stdc++.h>
using  namespace std;

pair<int , int > solve(vector<int>& arr, int target){

	if (arr.size () <= 2) return {-1,-1};
	// sort

	sort(arr.begin(), arr.end()); // n log n

	int  l = 0;
	int  r = arr.size()-1;


	while(l < r) {
		if ((arr[l]+arr[r]) == target) return  {arr[l], arr[r]};
		if ((arr[l]+arr[r]) > target){
			r--;
		}
		else if ((arr[l]+arr[r]) < target){
			l++;
		} else {
			return  {-1,-1};
		}

		
	}



}


int  main (){

	vector <int> nums = {9,10 ,1 ,2,4,6,7};

	pair<int, int >  elems = solve (nums, 3);
	cout << elems.first << " " << elems.second <<  endl;
	return  0;
}