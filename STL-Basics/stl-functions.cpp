#include<bits/stdc++.h>

using namespace std;


// 1. Function 1 - Reverse function

/*
Reverse function reverse the array 

how it does so?

while(left <= right){
    swap(arr[left],arr[right]);
    left++;right--;
}

int main(){

    vector<int> arr = {1,2,3,4};
    reverse(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

*/


// 2. Function 2 - Sort function



/*
sorting is ascending order

int main(){

    vector<int> arr{1,2,3,4,5};

    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


*/

/*
Sorting in descending order

sort(arr.begin(),arr.end(),greater<int>());

where greater<int>() is responsible for doing the sorting in descending order also it is a functor(obejct behaves like a function)

*/
