#include<bits/stdc++.h>
using namespace std;

int main (){

	int size;
	cin  >> size;
	int arr [size] ; 

	for  (int i = 0 ; i < size; i++){
		cin   >>  arr[i];
	}


	// pre-compute
	map<int, int >  map ;
	for (int i = 0; i < size; i++){
		map[arr[i]]++;
	}

	// fetch 
	int  q;
	cin >> q ;
	while(q > 0){
		int elems;
		cin >>  elems ;
		cout <<  map[elems] << endl ;
		q--;
	} 

	return  0;
}