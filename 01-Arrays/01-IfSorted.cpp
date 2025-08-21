
#include <bits/stdc++.h>
using namespace std;

    bool find (vector <int>  &arr,  int  n){
        int prev =  arr[0];

        for (int i = 1; i < n; i++){
            if (prev <  arr[i]){
                prev = arr[i];
            }else {
                return false;
            }
        }

        return true;
    }
   
int main  (){
    vector <int>  arr = {3,5,6,7,8,10};
    bool  isSort = find (arr,  arr.size());
    cout <<  isSort << endl ;
    return  0;
}