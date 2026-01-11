
#include<bits/stdc++.h>

using namespace std;


// Q1. Can Make Arithmetic Progression From Sequence
// Easy
// Topics
// premium lock icon
// Companies
// Hint
// A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

// Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

 

// Example 1:

// Input: arr = [3,5,1]
// Output: true
// Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
// Example 2:

// Input: arr = [1,2,4]
// Output: false
// Explanation: There is no way to reorder the elements to obtain an arithmetic progression.
 

// Constraints:

// 2 <= arr.length <= 1000
// -106 <= arr[i] <= 106


// Approach 1 - You sort the array then you take the common difference between the consequtive integers, then proving that it is same throughout

// Time complexity - O(nlogn)
// Space complexity - O(1)


// bool canMakeArithmeticProgression(vector<int>& arr) {
        

//         sort(arr.begin(),arr.end());
//         int i = 1;
//         int prev = -1;

//         int n = arr.size();
//         for(int i = 1;i<n;i++){
//             if(prev == -1){
//                 prev = arr[i] - arr[i-1];
//             }
//             else{
//                 //prev has chnaged
//                 if((arr[i] - arr[i-1]) != prev) return false;
//             }
//         }

//         return true;       
// }

//Approach 2 - Used the formulae

// Time complexity is O(n)
// Space complexity is O(n)

// bool canMakeArithmeticProgression(vector<int>& arr) {

//         int a = *min_element(arr.begin(),arr.end());

//         int l = *max_element(arr.begin(),arr.end());

//         int n = arr.size();

//         double d = (double)(l-a)/(n-1);

//         if(floor(d) != d) return false; //d should be an integer used the formula --> l = a + (n-1)*d 
            
//         unordered_set st(arr.begin(),arr.end());//using unordered set for O(1) lookup

//         int curr = a;

//         while(curr < l){

//             if(st.find(curr) != st.end()){
//                 //curr is present in the set
//                 curr += d;
//             }
//             else return false;//because it is not an ap
//         }   

//         return true;
// }

// int main(){

//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) cin>>arr[i];

//     if(canMakeArithmeticProgression(arr)) cout<<"It is an arithmetic progression";
//     else cout<<"It is not an arithmetic progression";
// }