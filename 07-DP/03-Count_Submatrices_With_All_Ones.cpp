#include <bits/stdc++.h>
using  namespace std;

	/* s == start == (3 size) == m == ->
	   e == end == (3 size) == n ==  ↓
	

				//   0  1  2	

		 	    0 	{1, 0, 1}, 			n ==  ==->
		 		1 	{1, 1, 0}, 			m == ↓
	 	 		2 	{1, 1, 0}


	 if  we  can  find the subarray  of 1d then also  we  can  find the no of subarray  in  2d  too
	eg : 1d 
		1	0	0	1
		i   i   i   i
	count = 1+1 == 2 if count is 1  then keep increasing the count add  to  subarray if  0 then count == 0
	subarray = 1+2 == 3 */

int  res = 0;

int  countSubArrBy_1D_Method(vector<int>& n){
	int count = 0;
	int  subArrSum = 0;

	// method of  finding  the subarray  in  oneD

	for (int i = 0; i<n.size(); i++){
		if (n[i] == 1){
			count++;
			subArrSum += count;
		}else {
			count = 0;
		}
	}

	// total  subArray 
	return subArrSum;
}

int numSubmat(vector<vector<int>>& mat){
	if(mat[0].empty() || mat.empty()) return  0;

	int  row = mat.size();    // 3
	int  col = mat[0].size(); //3 

	for (int start = 0; start < row; start++){

		vector <int> vec (col, 1);

		for (int  end = start;  end < row; end++){

			for  (int newCol = 0; newCol < col ; newCol++){

				vec[newCol] = vec[newCol] & mat[end][newCol];

			}
			res += countSubArrBy_1D_Method(vec);
		}
	}

	return  res;

}

int main (){
	vector<vector <int>> mat = {
		{1,0,1}, 
		{1,1,0},
	 	{1,1,0}
	};

	int  countOfSubArrays = numSubmat(mat);	
	cout <<  countOfSubArrays << endl ;
}