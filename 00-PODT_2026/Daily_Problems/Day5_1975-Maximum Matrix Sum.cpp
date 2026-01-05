class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        //  have  to  return  the max sum
        //  count  the abs  sum  of all  elements
        //  and count  the negatives
        // - if the count  of -ve is odd then the action  would be
        //     - there  is always 1 will always be an elem left  with  -ve sign
        //     - so  make the -v  sign to  the smallest  elem
        //     - And return  after doing ( sum  - smallest * 2)

        // - if  the count is  +ve then  return  the sum only
        //     - becuase  all  the elements can be converted into +ve elems

        int n = matrix.size();
        long long maxSum = 0;
        // finding the  smallest value
        int smallestVal = INT_MAX;
        int countOfNegs = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                maxSum += abs(matrix[i][j]);
                smallestVal = min(smallestVal, abs(matrix[i][j]));
                if (matrix[i][j] < 0) {
                    countOfNegs++;
                }
            }
        }

        if (countOfNegs % 2 == 0) {
            return maxSum;
        }
        // odd
        else {
            return (maxSum - smallestVal * 2);
        }
    }
};


// input example  :                  ====> Matrix =[[1,1], [1,1]]  --> 4
// --------------------
//  matrix = [
//     [1,-1],
//     [-1,1]
// ]

// output  :  4
// --------------