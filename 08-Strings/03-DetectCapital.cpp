class Solution {
public:
    bool check(string word, char a, char b) {
        for (char ch : word) {
            if (ch < a || ch > b) {
                return false;
            }
        }
        return true;
    }

    bool detectCapitalUse(string word) {
        if (check(word, 'A', 'Z'))
            return true; // All uppercase
        if (check(word, 'a', 'z'))
            return true; // All lowercase
        if (word[0] >= 'A' && word[0] <= 'Z' && check(word.substr(1), 'a', 'z'))
            return true; // First capital only

        return false;
    }
};