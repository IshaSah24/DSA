#include<bits/stdc++.h>
using namespace std;

int main (){
	int  size;
	cin  >>  size ;

	int arr [size];

	int element ; 
	for (int i = 0; i < size; i++){
		cin   >>  arr[i];
		// arr[i] = element;
	}




	// hash  array 
	int  hash [12] = {0};

	for (int i = 0; i < size; i++){
		hash[arr[i]] ++;
	}


	int  q;
	cin >> q ;
	while(q > 0){
		int number;
		cin  >>  number; 

		cout << hash[number] << " "  << endl;
		q--;
	} 

	return  0;
}