#include<bits/stdc++.h>
using namespace std;

string maxSubstringOf3(string num){
    char maxdigit = '-'; // as  we are considering "000" as a valid substring
    int  count = 1;
    for (int i = 1; i <num.size(); i++){
        if (num[i] == num[i-1]){
            count++;
            if (count >= 3 && num[i] > maxdigit){
                maxdigit = num[i];
            }
        }
        else {
            count = 1;
        }
    }


    if (maxdigit != '-') return string(3, maxdigit);
    else return "";
}
int main() {
    string num = "7773334444999";
    cout << maxSubstringOf3(num) << endl;
    return 0;
}
