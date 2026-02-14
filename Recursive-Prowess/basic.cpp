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

// --------------------------------------------------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------------------------------------

// Problem - Kth symbol in grammar

// --------------------------------------------------------------------------------------------------------------

// Problem - Tower of Hanoi

// In this problem two towers are given one is a source tower and other is a destination tower the source tower
// has n rings and we want to transfer all these rings to destination tower given the following rules -

// 1. A bigger ring can't be placed on top of a smaller ring
// 2. We have to transfer on ring at a time

// Find how many steps has taken

// Time complexity is O((2^n)-1)
//  void toh(int n,char src,char dst,char aux){

//         if(n == 0) return;
//         toh(n-1,src,aux,dst);
//         cout<<"Ring transferred from "<<src<<" to "<<dst<<" using "<<aux<<endl;
//         toh(n-1,aux,dst,src);
// }
// int main(){
//         int n = 3;
//         char src = 'A', dst = 'B',aux = 'C';
//         //i want to transfer all rings from src to dst using auxiliary tower
//         toh(n,src,dst,aux);
//         return 0;
// }

// ------------------------------------------------------------------------------------------------------------------

// Problem - Printing subsets

// Given an array of unique integers and we want to find out the number of subsets possible also print those subsets

// Time complexity is O((2^n)-1)
//  void printSubsets(int index,vector<int>& subset,vector<int>& nums,int& cnt){

//         //base condtion
//         if(index == nums.size()){
//                 if(subset.empty()){
//                         return;
//                 }
//                 cnt++;
//                 for(int elem:subset){
//                         cout<<elem<<" ";
//                 }
//                 cout<<endl;
//                 return;
//         }
//         //at an index i have a choice of either taking the element in subset or not
//         printSubsets(index+1,subset,nums,cnt);
//         subset.push_back(nums[index]);
//         printSubsets(index+1,subset,nums,cnt);
//         //then backtrack -> means remove the element which u pushed
//         subset.pop_back();
// }

// int main(){

//         vector<int> nums = {1,2,3};
//         vector<int> subset;
//         int cnt = 0;
//         printSubsets(0,subset,nums,cnt);
//         cout<<"Total number of subsets were:"<<cnt;
//         return 0;
// }

// -------------------------------------------------------------------------------------------------------------

// Problem - Given an array of integers that may contain duplicate elements. Your task is to print all unique subsets of teh given array.

// Approach 1 -

//   Time complexity is O(n*2^n) and space complexity is O(n*2^n)

// vector<vector<int>> AllSubsets(vector<int>& a,int n){

// set<vector<int>> st;
// vector<int> empty = {};//put empty list in your set

// st.insert(empty);

// for(int i=0;i<n;i++){

//     int elem = a[i];

//     //add this element in every subset we have found so far
//     set<vector<int>> new_st;
//     for(auto list:st){
//         list.push_back(elem);
//         sort(list.begin(),list.end());
//         new_st.insert(list);
//     }

//     for(auto list:new_st){
//         st.insert(list);
//     }
// }

// vector<vector<int>> res;

// for(auto list:st){
//     res.push_back(list);
// }

// return res;

// at the end set will contain all unqiue subsets of the array

// Approach 2 -

// Total time complexity is O(nlogn + n*2^n) and Space complexity is O(n) if exclude the output (with output is O(n*2^n) space)

// void findSubsets(int index,vector<int>& a,vector<int>& subset,vector<vector<int>>& res){

//     res.push_back(subset);

//     for(int i=index+1;i<a.size();i++){

//         if(i > index+1 && a[i] == a[i-1]){
//             continue;
//         }

//         subset.push_back(a[i]);
//         findSubsets(index+1,a,subset,res);

//         //backtracking
//         subset.pop_back();
//     }

// }

//  vector<vector<int>> AllSubsets(vector<int>& a,int n){

//     vector<vector<int>> res;
//     vector<int> subset;

//     findSubsets(-1,a,subset,res);

//     return res;
// }

// -----------------------------------------------------------------------------------------------------------

// Problem - Permutations with Spaces

// class Solution {
//   public:

// //   time complexity is O(2^n*n)
// //   space complexity is O(n)

//     void solve(int index,string s,string maintain,vector<string>& res){

//         if(index == s.size()){
//             res.push_back(maintain);//<-this will take O(n) time
//             return;
//         }

//         string temp;

//         temp = maintain + s[index];

//         solve(index+1,s,temp,res);

//         if(index != 0){

//             temp = maintain + " " + s[index];

//             solve(index+1,s,temp,res);
//         }

//     }
//     vector<string> permutation(string s) {

//         vector<string> res;
//         string maintain = "";
//         solve(0,s,maintain,res);
//         sort(res.begin(),res.end());//<- i have 2^n strings in my res vector so totak time complexity is O(2^nlog(2^n))
//         return res;
//     }
// };

// class Solution {
//   public:

//     vector<string> permutation(string s) {

//         //solving this iteratively
//         vector<string> res;
//         vector<string> prev;

//         string str = s.substr(0,1);
//         prev.push_back(str);

//         for(int i=1;i<s.size();i++){

//             char ch = s[i];

//             vector<string> curr;

//             for(string str:prev){
//                 string temp = str + ch;
//                 curr.push_back(temp);
//                 temp = str + " " + ch;
//                 curr.push_back(temp);
//             }

//             prev = curr;
//         }

//         for(string str:prev){
//             res.push_back(str);
//         }

//         reverse(res.begin(),res.end());

//         return res;

//         //overall time complexity is O(n*2^n)
//         //space complexity is O(n*2^n)
//     }
// };

// ---------------------------------------------------------------------------------------------------------

// Problem  - Generate All balanced Parethesis

// Given n pairs of parenthesis,write a function to generate all comninations of well formed parethesis



// class Solution {
// public:
//     void solve(int index, int openingYet, int openingRem, string maintain,
//                int limit, vector<string>& res) {

//         if (index == limit) {
//             res.push_back(maintain);
//             return;
//         }

//         // either i put a opening parethesis at index
//         if (openingRem > 0) {
//             maintain = maintain + '(';
//             solve(index + 1, openingYet + 1, openingRem - 1, maintain, limit,
//                   res);
//             maintain.pop_back(); // backtrack
//         }

//         // or i put closing if openiniYet > 0
//         if (openingYet > 0) {

//             maintain = maintain + ")";
//             solve(index + 1, openingYet - 1, openingRem, maintain, limit, res);
//             maintain.pop_back(); // backtrack
//         }
//     }
//     vector<string> generateParenthesis(int n) {

//         vector<string> res;
//         string maintain = "";
//         solve(0, 0, n,maintain,2*n,res);
//         return res;
//     }
// };

// class Solution {
// public:

//     void solve(int index,int open,string maintain,int n,vector<string>& res){

//         if(index == 2*n){
//             res.push_back(maintain);
//             return;
//         }

//         //u can insert ( if opening cnt is less than n
//         if(open < n){
//             maintain = maintain + "(";
//             solve(index+1,open+1,maintain,n,res);
//             maintain.pop_back();//backtracking
//         }

//         if(maintain.size() - open < open){
//             //this means that so far number of closing brackets used are lesser than opening
//             //it means you can insert ) as well
//             maintain = maintain + ")";
//             solve(index+1,open,maintain,n,res);
//             maintain.pop_back();//backtracking
//         }
//     }

//     vector<string> generateParenthesis(int n) {
        
//         string maintain = "";
//         vector<string> res;
//         solve(0,0,maintain,n,res);
//         return res;
//     }

//     //a little optimized
// };


// -------------------------------------------------------------------------------------------------------------



