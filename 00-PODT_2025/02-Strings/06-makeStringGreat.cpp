/*  if we  add  32  in  capital letter  the n we  get  small  letter

    97 (a) - 32 = 65(A)

    65(A) + 32 = 97 (a)

    approach 1:

    take a  res = ""  and  keep  adding  the  char from s
    keep  checking  if  the  current char from s is '> OR <' the current added letter res.back() 


    approach 2 

    if '97-65 == 32' or '65 - 97 == -32'  
    same letter opposite side  always == 32 or -32
    if  we  find  the  absolute  value then we  can  pop out  from  res

*/


class Solution {
public:
    string makeGood(string s) {
        string res = "";

        for (char& ch : s) {
            //  if (res.size() > 0 && ((ch + 32 == res.back()) || (ch - 32 ==
            //  res.back()))){   5ms      or        0ms

            if (!res.empty() && abs(res.back() - ch) == 32) {

                res.pop_back();
            } else {
                res.push_back(ch);
            }
        }
        return res;
    }
};