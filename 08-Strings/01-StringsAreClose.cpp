#include <bits/stdc++.h>
using namespace std;

bool isClose (string a, string  b){
	vector<int> freq1 (26, 0);
	vector<int> freq2 (26, 0);

	for (char ch :  a){
		freq1[ch - 'a']++;
	}

	for (char ch :  b){
		freq2[ch - 'a']++;
	}


	for (int  i = 0; i < 26; i++){
		if ((freq1[i] != 0 && freq2[i] == 0) || (freq1[i] == 0 && freq2[i] != 0)){
			return false;
		}
	}


	sort(freq1.begin(), freq1.end());
	sort(freq2.begin(), freq2.end());


	for (int i = 0; i < 26; i++){
		if(freq1[i] != freq2[i]){
			return false;
		}
	}


	return  true;
}

int main (){
	string  a  = "abc";
	string  b = "bzca";

	bool istrue = isClose(a,b);

	cout <<  istrue <<  endl;
}