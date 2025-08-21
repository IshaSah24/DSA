class Solution {
    public:
        int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            int maxCount = 1;
            int swapt = 0;
            int swapb = 0;
            int n = tops.size();
            for (int i = 0; i < n; i++) {
                if (maxCount > 6) {
                    return -1;
                } else if (maxCount == tops[i] && maxCount == bottoms[i]) {
                    continue;
                } else if (maxCount != tops[i] && maxCount != bottoms[i]) {
                    maxCount += 1;
                    i = -1; // starting from  the begining even after i++ it  will  give  i=0
                    swapt = 0;
                    swapb = 0;
                } else if (maxCount == tops[i]) {
                    // swap(tops[i], bottoms[i]); // testig perpose no need to  swap  actually
                    swapb++;
                } else if (maxCount == bottoms[i]) {
                    // swap(tops[i], bottoms[i]);
                    swapt++;
                }
            }
            int minSwap = min(swapb, swapt);
            return minSwap;
        }
    };