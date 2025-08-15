class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
    
            // APPROACH : 1
            // we have two  approaches  here  one is  using map  DS where all  the
            // equal pairs  will be stored and we will  apply  one "RULE" for every
            // approach  like making the first  face  i.e [i]  < [j] as the question
            // allow us to  do it so,
            // [[1,2],[2,1] ===> [1,2]] so that  it can  make  a pair  of count 1
            // eg. IN THE QUESTION - "(a == d and b == c) - that is, one domino can
            // be rotated to be equal to another domino."
    
            // APPROACH : 2
            // vector of size 100. why ? at max [9,9] ==>  99 Constraints: "1 <=
            // dominoes[i][j] <= 9" we can  try  a approach of storing frequency
            // inside the vector after  converting the  pair into  numbers
            //  using simple math ---> num = dominoes[0] * 10 + dominoes[1]
            // before increasing the frequency we will  add  the initial  frequecy
            // to  the  res variable  to  return ans in one single traversal O(n)
            // where space in  O(99)  -->  constant
    
            //  what  ever  res value comes will  find the combination  pairs  ===>
            //  res = freq * (freq - 1) / 2
    
            // APPROACH 1 :
            // ------------
    
            vector<int> vc(100, 0);
            int res = 0;
            for (auto& dominoe : dominoes) {
    
                if (dominoe[0] > dominoe[1]) {
                    int temp = dominoe[0];
                    dominoe[0] = dominoe[1];
                    dominoe[1] = temp;
                }
                int num = dominoe[0] * 10 + dominoe[1];
                res += vc[num];
                vc[num]++;
            }
            return res;
    
            // APPROACH 2
    
            // map<pair<int, int>, int> pr;
    
            // for (auto& dominoe : dominoes) {
            //     if (dominoe[0] > dominoe[1]) {
            //         int temp = dominoe[0];
            //         dominoe[0] = dominoe[1];
            //         dominoe[1] = temp;
            //     }
    
            //     pr[{dominoe[0], dominoe[1]}]++;
            // }
    
            // int res = 0 ;
    
            // for (auto &it : pr){
            //    int freq = it.second;  // the count
            //    res +=  freq * (freq - 1) / 2;
            // }
    
            // return res;
        }
    };