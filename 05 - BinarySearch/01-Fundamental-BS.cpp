#include <bits/stdc++.h>
using  namespace std;

int main  (){
	int arr [] = {1,2,3,4,5,6,7,8};
	int t = 3;

	int low = 0;
	int high =  7;

	while (low <=  high){
		int mid  = low +(high - 1) / 2;

		if (arr[mid] ==  t){
			cout <<  mid;
			break ;
		}
		else if (arr[mid] >  t){
			high =  mid - 1;
		}

		low =  mid + 1;
	}


	return 0;
}