#include <bits/stdc++.h>
using namespace std;


int removeDuplicate (vector<int> &arr, int size){
    set <int>  st ;
    int index   = 0;
    for (int i = 0; i < size;  i++){
        st.insert(arr[i]);
    }
    return st.size();
}

int main (){
    
    // cout  << "hello "<< endl;

    vector  <int> arr = {1,1,2,2,2,3,3,6,7,9,7,7,7,7};

   int index = removeDuplicate(arr, arr.size()); 
   cout <<  index <<  endl ;
    return 0;
}
