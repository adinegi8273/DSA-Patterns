// #include<bits/stdc++.h>

// using namespace std;



// void buildSegment(int index,int low,int high,vector<int>& segment,vector<int>& a){
    
//     if(low == high){
        
//         //visiting a leaf node and also it is a single element of array
//         segment[index] = a[low];
//         return;
//     }
    
//     int mid = (low + high)/2;
    
//     buildSegment(2*index+1,low,mid,segment,a);
//     buildSegment(2*index+2,mid+1,high,segment,a);
    
//     segment[index] = segment[2*index+1] + segment[2*index+2];
// }

// int getSum(int index,int low,int high,int left,int right,vector<int>& segment){
    
//     //case 1:target range is completely outside from the range that we are viewing
//     if(low > right || high < left){
//         return 0;
//     }
    
//     //case 2:target range is completely inside the range 
//     if(left <= low && high <= right){
//         return segment[index];
//     }
    
//     //case 3:target range and current range are overlapping
//     int mid = (low + high)/2;
    
//     return getSum(2*index+1,low,mid,left,right,segment) + getSum(2*index+2,mid+1,high,left,right,segment);
// }

// void updateSegment(int index,int low,int high,int left,int right,int value,vector<int>& segment,vector<int>& lazy){

//     if(lazy[index] != 0){

//         segment[index] += (lazy[index]*(high-low+1));

//         if(low != high){
//             lazy[2*index+1] += lazy[index];
//             lazy[2*index+2] += lazy[index];
//         }

//         lazy[index] = 0;
//     }

//     //case 1:completely outside
//     if(high < left || low > right){
//         return;
//     }
//     else if(left<= low && high <= right){

//         //case 2:completely inside
//         segment[index] += ((high-low+1)*value);
//         if(low != high){

//             lazy[2*index+1] += value;
//             lazy[2*index+2] += value;
//         }
//         return;
//     }

//     int mid = (low + high)/2;

//     updateSegment(2*index+1,low,mid,left,right,value,segment,lazy);
//     updateSegment(2*index+2,mid+1,high,left,right,value,segment,lazy);

//     segment[index] = segment[2*index+1] + segment[2*index+2];
// }

// int main(){
    
//     int n;
//     cin>>n;
    
//     vector<int> a(n);
    
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
    
//     vector<int> segment(4*n,0);
    
//     vector<int> lazy(4*n,0);

//     buildSegment(0,0,n-1,segment,a);

//     vector<int> q =  {3,6,2};
    
//     updateSegment(0,0,n-1,q[0],q[1],q[2],segment,lazy);

//     cout<<getSum(0,0,n-1,3,9,segment);

//     return 0;
// }


