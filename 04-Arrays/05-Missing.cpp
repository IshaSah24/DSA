#include <bits/stdc++.h>
using namespace std;

int  missingNum(int arr[], int size){
	int index = 1;
	for  (int  i = 0; i< size;  i++){
		if  (arr[i] ==  index){
			index++;
		}
			else {
				return  index;
			}
	}

	return  -1;
}
int main(){

	int arr [] = {1,2,4,4,5};

	int  num =  missingNum (arr, 5);

	cout <<  num  <<  endl ;
	return  0;
}