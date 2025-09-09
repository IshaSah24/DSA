class Solution {
public:

    // TLE for  all  the possible  values  we are  going  through  the recursive  solution


    // but with  the dp we have  optimized our  solution 
    // int solve(int stair,int  n, vector<int>& dp) {
    //         if (stair == n) {
    //             return 1;
    //         }
    //         if (stair > n)
    //             return 0;

    //         if  (dp[stair] != -1){
    //             return dp[stair];
    //         }

    //     return dp[stair]  = solve(stair + 1, n, dp) + solve(stair + 2, n, dp);
    // }

    // int climbStairs(int n) {

    //     vector <int>  dp (n+1, -1);
    //     return solve(0,n, dp);
       
    // }



    //bottom  up 
    // space  complexity  == O(N)

       int climbStairs(int n) {
        vector <int> dp (n+2, 0);
        dp[n] = 1;
        dp[n+1]  = 0;

        for (int i = n - 1; i >= 0; i--){
            dp[i] = dp[i+1] + dp[i + 2];
        }
        
        return dp[0];
       }

};
