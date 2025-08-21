#include<bits/stdc++.h>
using namespace std;



int solve (int i, int j,  vector<vector<int>>& mat, int m, int n){

	if (i >= m || j >= n) return 0;
	if (mat[i][j] == 0) return  0;


	int right  = solve(i, j+1, mat, m, n);
	int down = solve (i+1, j, mat, m , n);
	int diag = solve (i+1, j+1, mat, m , n);

	return 1+ min({right, down,  diag});
}






/*
		{1,0,1}, 
		{1,1,0},
	 	{1,1,0}

*/

// square  == diagnal = 1 , right= 1, down = 1

int  findSub (vector <vector<int>> &mat){
	int res = 0;

	int m = mat.size(); 
	int n = mat[0].size();

	for (int i = 0; i<m; i++){
		for (int j = 0; j < n ; j++){
			if (mat[i][j] == 1){
				// then  we  will  call  recursion  to find other  side's value
				res += solve(i, j, mat, m, n);
			}
		}
	}

	return  res;
}

int main (){
	vector<vector<int>> mat ={
		{0,1,1,1},
  		{1,1,1,1},
  		{0,1,1,1}
	};

	int  SquareSubOfOne = findSub(mat);
	cout << SquareSubOfOne << endl;
}