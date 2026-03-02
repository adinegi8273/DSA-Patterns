/*
Problem 1 - Generate Parenthesis

Given n pairs of parenthesis,write a function to generate all comninations of well formed parethesis

*/

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

// Problem 2 - Score of Parentheses

// Given a balanced parentheses string s, return the score of the string.

// The score of a balanced parentheses string is based on the following rule:

// "()" has score 1.
// AB has score A + B, where A and B are balanced parentheses strings.
// (A) has score 2 * A, where A is a balanced parentheses string.

// class Solution {
// public:
//     int scoreOfParentheses(string s) {
        

//         stack<int> st;//in this stack i will push the opening parenthesis representing -1

//         for(char ch:s){

//             if(ch == '('){
//                 st.push(-1);
//             }
//             else{

//                 int sum = 0;

//                 //until you find -1 at the top of stack till then add the values to you rsum

//                 while(st.top() != -1){
//                     sum = sum + st.top();
//                     st.pop();
//                 }

//                 //pop again the opening parenthesis
//                 st.pop();

//                 if(sum == 0) st.push(1);
//                 else st.push(2*sum);
//             }
//         }

//         int res = 0;

//         while(!st.empty()){
//             res = res + st.top();
//             st.pop();
//         }

//         return res;

//         //Time complexity is O(2n)
//         //Space complexity is O(n)
//     }
// };

// -----------------------------------------------------------------------------------------------------------

// Problem 3 - Valid Parenthesis


// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// class Solution {
// public:
//     bool isValid(string s) {
        
//         stack<char> st;

//         for(char ch:s){

//             if(ch == '(' || ch == '{' || ch == '['){
//                 st.push(ch);
//             }
//             else{

//                 if(st.empty()){
//                     return false;
//                 }
//                 else if((ch == ')' && st.top() == '(') || (ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '[')){
//                     st.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }

//         if(!st.empty()) return false;
//         return true;
//     }
// };

// ----------------------------------------------------------------------------------------------------------

// Problem 4 - Remove Outermost Parentheses

// A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

// For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
// A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

// Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.
// Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

// Example 1:

// Input: s = "(()())(())"
// Output: "()()()"
// Explanation: 
// The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
// After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         stack<char> st;

//         int n= s.length();
//         set<int> sett;
//         for(int i=0;i<n;i++){

//             char ch = s[i];
//             if(ch == '('){
//                 //check if stack is empty
//                 if(st.empty()) sett.insert(i);
//                 st.push(ch);
//             }
//             else{
//                 st.pop();
//                 if(st.empty()) sett.insert(i);
//             }
//         }
//         string res = "";
//         for(int i=0;i<n;i++){
//             if(sett.find(i) == sett.end()) res += s[i]; 
//         }  

//         return res;

//     }
// };