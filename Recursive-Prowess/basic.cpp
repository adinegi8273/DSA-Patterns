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


// Problem 3 - Height of a binary tree

// NOTE - if height defintion is given as number of nodes in the longest path from root to leaf -> return 0 in base conditon

        //   if height defintion is given as number of edges in the longest path from root to leaf -> return -1 in base conditon
        
        
// int height(node* root){
    
//     if(root == NULL) return -1;
    
//     return max(height(root->left), height(root->right))+1;
// }


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










