class Solution {
    public:
        string pushDominoes(string dominoes) {
            int n = dominoes.size();
            vector<int> RightPush(n);
            vector<int> LeftPush(n);
    
            for (int i = 0; i < n; i++) {
                if (dominoes[i] == 'R') {
                    RightPush[i] = i;
                } else if (dominoes[i] == '.') {
                    RightPush[i] = i > 0 ? RightPush[i - 1] : -1;
                } else {
                    RightPush[i] = -1;
                }
            }
    
            vector<char> res(n);
    
            for (int i = n - 1; i >= 0; i--) {
                if (dominoes[i] == 'L') {
                    LeftPush[i] = i;
                } else if (dominoes[i] == '.') {
                    LeftPush[i] = i < n - 1 ? LeftPush[i + 1] : -1;
                } else {
                    LeftPush[i] = -1;
                }
            }
    
            for (int i = 0; i < n; i++) {
                int distRight = abs(i - RightPush[i]);
                int distLeft = abs(i - LeftPush[i]);
    
                if (RightPush[i] == -1 && LeftPush[i] == -1) {
                    res[i] = '.';  
                } else if (RightPush[i] == -1) {
                    res[i] = 'L';
                } else if (LeftPush[i] == -1) {
                    res[i] = 'R';
                } else if (distRight == distLeft) {
                    res[i] = '.';
                } else if (distRight < distLeft) {
                    res[i] = 'R';
                } else if (distRight > distLeft) {
                    res[i] = 'L';
                }
            }
            return string(res.begin(), res.end());
        }
    };