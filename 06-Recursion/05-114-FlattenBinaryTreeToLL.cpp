#include <bits/stdc++.h>
using namespace std;

void flatten (TreeNode*  root){
	// weh have root ->  right and root  -> left

	flatten(root -> right);
	flatten(root->left);

	// root == 1
	//root -> left  == 2 -> 3 -> 4
	//root -> right  == 5 ->  6

	// before doing  this we have to  store  the root -> right in temp 
	TreeNode* temp  = root -> right;   
	root ->  right = root -> left ;
	root  -> left  = NULL;

	// temp -> 5 -> 6
	// root (1) -> 2 -> 3 -> 4 -> 


	// now  we  have to  merge the  temp  with  the cur(node pointer), so that ===> ...4 -> temp


	TreeNode* cur = root ;
	while (root -> right){
		cur = cur -> right;
	}

	cur -> right  = temp ;
}