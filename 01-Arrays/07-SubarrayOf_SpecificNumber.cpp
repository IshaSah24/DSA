class Solution {
    public:
        long long zeroFilledSubarray(vector<int>& nums) {
           
           
            /* 
             with  simple  math  formula : (n)* (n+1)/2
             where n is no of time '0' appeared continously
    
             if n = 2
                 then :  2 * (2+1) / 2 == 3 whih is ✅
    ----------------------- TYPE 1 ----------------------------------*/
          
            // int i = 0;
            // long long count = 0;
            // while (i <= nums.size() - 1) {
            //     int l = 0;
            //     if (nums[i] == 0) {
    
            //         while (i < nums.size() && nums[i] == 0) {
            //             i++;
            //             l++;
            //         }
    
            //     } else {
            //         i++;
            //     }
            //     count += (1LL * l * (l + 1)) / 2; 
            // }
            // return count;
    
    
    
    // ------------------TYPE 2 ----------------------------
            int count = 0;
            long long sum  = 0;
    
            for (int  i = 0; i<nums.size(); i++){
                if (nums[i] == 0) {
                    count++;
                    sum += count;
                }else {
                    count = 0;
                }
            }
    
            return  sum;
        }
    };