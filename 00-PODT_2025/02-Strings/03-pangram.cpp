/*
	Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
	Output: true
*/

#include<bits/stdc++.h>
using namespace std;

bool isPangram (string  sen){
	vector<int> countChar (0, 25);

	for (int i = 0; i < sen.size(); i++){
		countChar[sen[i] - 'a'] = 1;
	}

	for (int i = 0; i<countChar.size(); i++){
		if (countChar[i] == 0){
			return false;
		}
	}

	return  true;

}

int main (){
	string  sentence = "thequickbrownfoxjumpsoverthelazydog";

	bool ispan = isPangram(sentence);
	cout << ispan <<endl;
}