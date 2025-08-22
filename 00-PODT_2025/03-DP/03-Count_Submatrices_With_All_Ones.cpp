class Solution {
	public:
	
	int oneDcal(vector<int> vec){
		int count= 0;
		int subArr=0;
	
		for(int i=0; i<vec.size(); i++){
			if(vec[i]==1){
				count++;
				subArr+= count;
			}else{
			   count = 0;
			}
		  
		}
		return subArr;
	}
	
	
		int numSubmat(vector<vector<int>>& mat) {
	
	
			if(mat.empty() || mat[0].empty()) return 0;
			int res = 0;
	
			int m = mat.size();
			int n =mat[0].size();
	
			for(int start= 0; start<m; start++){
				vector<int>vec(n,1);
				for(int end = start; end <m; end++){
	
					for(int col = 0; col < n ; col++){
						vec[col] = vec[col] & mat[end][col];
	
					}
					res+= oneDcal(vec);
				}
			}
			return res;
		}
	};