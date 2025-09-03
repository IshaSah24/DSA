// class Solution {
// public:

// vector <string> result ;

// bool isValidP(string str) {
//     stack<char> st;

//     for (char c : str) {
//         if (c == '(') {
//             st.push(c); 
//         } else {
//             if (st.empty()) 
//                 return false;
//             st.pop();
//         }
//     }

//     return st.empty(); // makes  valid if  empty
// }

//     void  solve(string str,  int  n){

//         if (str.size() == 2*n){
//             if (isValidP(str)) result.push_back(str);
//         }

//         // do  something
//         str.push_back('(');
//         solve(str, n); // exploration 

//         //undo
//         str.pop_back();

//         // next  exploration
//         str.push_back(')');
//         solve(str, n);

//     }
//     vector<string> generateParenthesis(int n) {
//         string str = "";
//         solve(str, n);
//         return  result;
//     }
// };

    //                       ^                     
    // MEMORY  LIMIT EXCEED  |
















