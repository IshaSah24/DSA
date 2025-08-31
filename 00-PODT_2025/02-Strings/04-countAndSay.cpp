/*
	countAndSay(1) = "1"
	countAndSay(2) = RLE of "1" = "11"  --> at  above 1 times present 1
	countAndSay(3) = RLE of "11" = "21"  --> at  above 2 times present 1 ...so on
	countAndSay(4) = RLE of "21" = "1211"

	fn(3)  get ("11") process... --->  2 times 1
	  |
	  |
	fn(2)  process... (get = "1") --> 1 times 1 present  return "11"
	  |
	  |
	fn(1)   return  "1"

*/

#include <bits/stdc++.h>
using namespace std;


string  countAndSay (int num) {
	if  (num == 1){
		return "1";
	}

	string  str = countAndSay(num - 1); // "112"


	//  count  the  number of 1's and 2's

	int  i = 0;
	int count  = 0;
	int current  = str[0];
	int indx = 0;
	int n = str.size();

	string newString = "";
	while(i < n){

		current = str[i];
		count = 0;

		while(i < n && current == str[i]){
			count++;
			i++;
		}

		// '1'  =  2 times


		string strCount =  to_string (count); // 2 -> "2"
		// 1 is  a  charachter to  we  have  to  change it into string to  append

		string apnd = strCount + string(1, current); // "21"


		

		newString.append(apnd);
	}	

	return newString;

}


int main (){

	string  StringCount =  countAndSay (3);
	cout << StringCount  << endl;
}