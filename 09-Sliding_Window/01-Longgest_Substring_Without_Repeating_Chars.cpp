#include <bits/stdc++.h>
using namespace std;


// take vector of 256 with -1 values as map  
// where -1 will  be treated as the  seen  unseen  only 
// and rest  we will  check  for where  the current  elem  is seen  in the hash  or  not 
// if  not increase the count
// if  yes then  move the left but after  the current seen  element's previous index
// so we can avoid the duplicasy


int solve (string& str){
	int size = str.size();

	vector<int> mpp (256, -1); // where  -1 means that  it is not  seen yet

	int left = 0;
	int  right  = 0;
	int  maxlen = 0;


	while (right < size){
		if (mpp[str[right]] != -1) { // that means it is seen 
			// so  now i have  to  shrink the current value (r) from  the past 
			if (left  <= mpp[str[right]]){
				left = mpp[str[right]] + 1;
			}
		}

		// that  mean i have  not  seen  yet  so  calculate the lenght till  now and  keep  expanding

		maxlen  = max (right-left+1, maxlen);
		mpp[str[right]] = right; // storing the index  for future shrinking
		right++;
	}

	return  maxlen;

}

int main(){
	string str  = "abcdabcdefgbb";    // a -- > 97 

	int max = solve (str);

	cout << max << endl ;
	return 0;
}