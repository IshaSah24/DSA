#include <bits/stdc++.h>
using  namespace std;

 int countArea(vector <vector<int>> &mat){
 	int  minRow = mat.size();
 	int maxRow = -1;

 	int minCol = mat[0].size();
 	int maxCol = -1;

 	for (int i = 0; i < mat.size(); i++){
 		for (int j = 0; j< mat[0].size(); j++){
 			if(mat[i][j] == 1){
 				minRow = min(minRow, i);
 				maxRow = max (maxRow, i );

 				minCol = min(minCol, j);
 				maxCol = max(maxCol, j);
 			}
 		}
 	}

 	return (maxRow-minRow+1) * (maxCol-minCol+1);
 }


int  main (){
    vector <vector<int>> mat ={
    	{0,1,0},
    	{1,0,1},
    };

    cout << countArea(mat) << endl;
}