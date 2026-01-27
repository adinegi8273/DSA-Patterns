#include<bits/stdc++.h>

using namespace std;
    
    
    
// Problem 1 - Print 1 to N using recursion
// void fun(int n){
    
//     //base condition
//     if(n == 0) return;
    
//     fun(n-1);
//     cout<<n<<" ";
// }
// int main(){
    
//     int n;//5
//     cin>>n;
    
//     fun(n);//5
//     return 0;
// }

//Problem 2 - Print n to 1 using recursion
// void fun(int n){
    
//     //base condition
//     if(n == 0) return;
    
//     cout<<n<<" ";
//     fun(n-1);
    
// }
// int main(){
    
//     int n;//5
//     cin>>n;
    
//     fun(n);//5
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------

// Problem 3 - Height of a binary tree

// NOTE - if height defintion is given as number of nodes in the longest path from root to leaf -> return 0 in base conditon

        //   if height defintion is given as number of edges in the longest path from root to leaf -> return -1 in base conditon
        
        
// int height(node* root){
    
//     if(root == NULL) return -1;
    
//     return max(height(root->left), height(root->right))+1;
// }

// ------------------------------------------------------------------------------------------------------------------

// Problem 4 - Sort an array

// 1 - Using merge sort - 

// #include<bits/stdc++.h>

// using namespace std;


// void merge(int low,int mid,int high,vector<int>& arr){
    
    
//     vector<int> temp;
//     int i = low,j = mid+1;
    
//     while(i <= mid && j <= high){
        
//         if(arr[i] <= arr[j]) temp.push_back(arr[i++]);
//         else temp.push_back(arr[j++]);
//     }
    
//     while(i <= mid){
//         temp.push_back(arr[i++]);
//     }
    
//     while(j <= high){
//         temp.push_back(arr[j++]);
//     }
    
//     for(int i=0;i<temp.size();i++){
//         arr[low+i] = temp[i];
//     }
    
// }

// void mergeSort(int low,int high,vector<int>& arr){//merge sort uses binary recursion
    
//     if(low < high){//will return if low >= high -> represent single element
        
//         int mid = (low + high)/2;
        
//         mergeSort(low,mid,arr);
//         mergeSort(mid+1,high,arr);
//         merge(low,mid,high,arr);
//     }
// }
// int main(){
    
//     int n;
//     cin>>n;
    
//     vector<int> arr(n);
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     mergeSort(0,n-1,arr);
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }


// 2. Quick sort

// Normal Quick sort

// Method 1 - TC - O(nlogn) time in bets and average but O(n^2) in worst case SC - O(logn)

// int partition(int low,int high,vector<int>& a){

//         //select a pivot index
//         int pivot = a[high];

//         int i = low;
//         int j = low-1;

//         while(i <= high){
//                 if(a[i] < pivot){
//                         swap(a[i],a[j+1]);
//                         j++;
//                 }
//                 i++;
//         }

//         swap(a[high],a[j+1]);
//         return j+1;
// }

// void quickSort(int low,int high,vector<int>& a){

//         if(low >= high){
//                 return;
//         }

//         int pivot_index = partition(low,high,a);
//         quickSort(low,pivot_index-1,a);
//         quickSort(pivot_index+1,high,a);
// }

// int main(){
//         int n;
//         cin>>n;

//         vector<int> a(n);

//         for(int i=0;i<n;i++){
//                 cin>>a[i];
//         }

//         quickSort(0,n-1,a);

//         for(int i=0;i<n;i++){
//                 cout<<a[i]<<" ";
//         }

//         return 0;
// }


// ---------------------------------------------------------------------------------------------------------

// Problem - Sort a stack


// Given a stack of integers st[]. Sort the stack in ascending order (smallest element at the bottom and largest at the top).

// Input: st[] = [1, 2, 3]
// Output: [3, 2, 1]

// Time complexity is O(nlogn) and space complexity is O(n)

// class Solution {
//   public:
//     void sortStack(stack<int> &st) {
        
        
//         vector<int> temp;
        
//         while(!st.empty()){
//             temp.push_back(st.top());
//             st.pop();
//         }
        
//         sort(temp.begin(),temp.end());
        
//         for(int elem:temp){
//             st.push(elem);
//         }
    
//     }
// };


// ----------------------------------------------------------------------------------------------------------------

// Problem - Delete middle element from the stack using Recursion
// Given a stack s, delete the middle element of the stack without using any additional data structure.

// Middle element:- floor((size_of_stack+1)/2) (1-based indexing) from the bottom of the stack.

// Note: The output shown by the compiler is the stack from top to bottom.

// Examples:

// Input: s = [10, 20, 30, 40, 50]
// Output: [50, 40, 20, 10]
// Explanation: The bottom-most element will be 10 and the top-most element will be 50. Middle element will be element at index 3 from bottom, which is 30. Deleting 30, stack will look like {10 20 40 50}.
// Time complexity is O(n/2) and space is O(n/2)

// class Solution {
//   public:
//     // Function to delete middle element of a stack.
//     void deleteMid(stack<int>& s) {
        
//         int middle =floor((s.size()+1)/2);
//         if(s.size() % 2 == 1){
//             //the size  is odd
//             middle = middle - 1;
//         }
//         stack<int> temp;
//         while(middle--){
//             temp.push(s.top());
//             s.pop();
//         }
        
//         if(s.size() == 0){
//             //stack may have become empty
//             return;
//         }
//         //now at teh top you have the middle element delete it now
//         s.pop();
        
//         while(!temp.empty()){
//             s.push(temp.top());
//             temp.pop();
//         }
        
//     }
// };


// ------------------------------------------------------------------------------------------------------------

// Problem - Reverse a stack using Recursion

// You are given a stack st[]. You have to reverse the stack.

// class Solution {
//   public:
  
//     void insertElementAtBottom(stack<int>& st,int& x){
        
//         if(st.empty()){
//             st.push(x);
//             return;
//         }
        
//         int top = st.top();
//         st.pop();
//         insertElementAtBottom(st,x);
//         st.push(top);
//     }
    
//     void solve(stack<int>& st){
        
//         if(st.size() == 1){
//             return;
//         }
        
//         int top = st.top();
//         st.pop();
//         solve(st);
        
//         //when you backtrack whatever value u have at the top put that value at the bottom
        
//         insertElementAtBottom(st,top);
        
//     }
//     void reverseStack(stack<int> &st) {
//         // code here
        
        
//         solve(st);
//     }
// };


