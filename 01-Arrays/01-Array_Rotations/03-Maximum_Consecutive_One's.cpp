#include <bits\stdc++.h>
using  namespace std;


// time  complexity  ==> O(N)


int solve (vector<int> & arr){
	int maxel = 0;
	int count  = 0 ;


	for (int i = 0; i < arr.size(); i++){
		if (arr[i] == 1) {
			count ++; 
			continue;
		}

		maxel = max(count, maxel);
		count = 0;
	}

	return  maxel;
}


int main  (){
	vector<int>arr = {1,1,1,0,0,1,1,0,0} ;
	int count = solve (arr);

	cout << count << endl;
	return  0;
}