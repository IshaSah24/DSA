#include <bits/stdc++.h>
using  namespace std;

bool isvowel (char  ch){
	if (ch ==  'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		return true;
	}

	return  false;
}

bool fn (string a){
	int  w1count = 0;
	int w2count = 0;
	int  halflen = a.size() / 2;

	for (int i = 0; i < halflen; i++){
		if(isvowel(a[i])){
			w1count++;
		}
	}

	for  (int i = halflen; i < a.size(); i++){
		if(isvowel(a[i])) w2count++;
	}


	if  (w1count == w2count ) return true;



	return false;

}


int  main (){
	string  a = "teextbook";
	bool isAlike = fn(a);

	cout <<  isAlike <<  endl;
}