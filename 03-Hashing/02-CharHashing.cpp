#include<bits/stdc++.h>
using namespace std;

int main (){
	// cout <<  "running...";
	string s ;
	cin >>  s;




	// pre-compute
	int  hash [26] = {0};

	for (int i = 0; i < s.size(); i++){
		hash[s[i] - 'a'] += 1; 
	}


	int  q;
	cin >> q ;
	while(q > 0){
		//fetch
		char c;
		cin  >>  c; 

		cout << hash[c - 'a'] << " "  << endl;
		q--;
	} 

	return  0;
}