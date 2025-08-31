
/*

Example 1:

    Input: s = "book"
    Output: true
    Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
    
Example 2:
    Input: s = "textbook"
    Output: false
    Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
    Notice that the vowel o is counted twice.
    
*/


class Solution {
public:
    bool isVowel  (char  ch){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int i = 0;
        int j = s.size()/2;

        int lCount = 0;
        int rCount = 0;
        while (i < j && j < s.size()){
            if(isVowel(s[i])) lCount++;
            if(isVowel(s[j])) rCount++;

            i++;
            j++;
        }

        if (lCount == rCount) return  true;

        return false;
    }
};