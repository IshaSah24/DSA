#include <bits/stdc++.h>
using namespace std;
vector<int> PlusOne(vector<int> &digits){
    for (int i = digits.size() - 1; i >= 0; i--){
        if (digits[i] < 9){
            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}
int main(){
    vector<int> digits = {8, 8, 9};
    vector<int> result = PlusOne(digits);

    for (int i : result){
        cout << i;
    }
    cout << endl;
}