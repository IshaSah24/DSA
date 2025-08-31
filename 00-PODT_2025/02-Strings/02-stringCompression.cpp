
#include<bits/stdc++.h>
using namespace std ;
/*
	Input: chars = ["a","a","a","b","b","c","c"]
	Output: ["a","3","b","2","c","2"]



	problem  10  ==>  ['1', '0']

*/

void stringCompress(vector<char>& chars){

	char  current = chars[0];
	int  indx = 0;
	int n = chars.size();
	int i = 0;
	int count = 0;

	while (i<n){
		current = chars[i];
		count  = 0;

		while (i <  n && chars[i] == current){
			i++;
			count++;  
		}

		
		chars[indx] = current;  
		indx++;

		// assigning can on  '> 10  and  < 10'

		if (count > 1 && count < 10){
			  chars[indx] = '0' + count;
              indx++;

		}else if (count  >=  10){
			string strcount = to_string(count);
			// '12'
			for(char& ch: strcount){
				chars[indx] = ch ;
				indx++ ;
			}
		}
	}

}	



int main  (){
	vector<char> chars = {'a','a','b','b','c','c','c'};


	stringCompress(chars);

	for (char  ch : chars){
		cout << ch  << endl ;
	}
}