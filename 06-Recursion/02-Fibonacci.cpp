#include <iostream>
using namespace std;

int fibo(int  num){
	if  (num == 0 || num == 1){
		return num ; 

	}else  {
		return fibo (num - 1 ) + fibo (num - 2);

	}
}

int main  (){
	int num;
	cin >>  num;
	int N =  fibo(num);
	cout << N <<endl;

	return 0;
}