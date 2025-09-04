#include <bits/stdc++.h>
using  namespace std;

int  detectCol (vector <vector<int>>& arr){
	int unsortedCol  = 0;
	for (int i  = 0; i<arr[0].size(); i++){
		for (int j = 0; j < arr.size() j++){
			if (arr[j][i]   > arr[j][i+1]){
				unsortedCol++;
				break;
			}
		}
	}
}


int main (){
    vector<vector<string>> arr = {
        {"a", "b", "c"},
        {"b", "c", "e"},
        {"c", "a", "e"}
    };

								  
	int opt  = detectCol (arr);
}