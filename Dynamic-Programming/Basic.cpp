#include<bits/stdc++.h>

using namespace std;


// Introduction to DP :-

// To find solution to a problem, we divide the problem into sub-problems, find answers to those sub-problems , combine them to get the original answer!

// That’s it!

// Example:- Say I ask you to calculate :- (1+2+3+4+5) You do this:-   

// 1)Break it into sub-problems : (1+2)+(3+4)+(5)

// 2) Find answers to those sub-problems: (3) + (7) + (5) 

// 3) Combine them to get the answer to the original problem : 15.

// My personal trick :-

// -->dp[i] usually mean the best answer to the problem till the i’th index of the array.

// -->Obviously, final answer will be dp[n](where 'n' is the size of the array)

// -->We cannot calculate dp[n] directly, we first need to calculate dp[1],dp[2],… and combine their results to find the value of dp[n] :-)

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Problem-1 : We are given an array of integers(a[n]) . We are given multiple queries of the form : (0, i) which means we need to output the sum of all numbers from index- ‘1’ to index ‘i’ of the array.

// Brute force - Pick up one query and find traverse from 1 to i everytime.
// T.C. = O(n^2) S.C. = O(1)

//Optimal solution - Prefix sums - O(n)

void solve(vector<int>& arr,vector<vector<int>>&q){

    int n= arr.size();
    vector<int> p(n);

    p[0] = arr[0];

    for(int i=1;i<n;i++){
        p[i] = arr[i] + p[i-1];
    }

    for(auto query:q){

        cout<<p[query[1]]<<" ";
    }

}
int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<vector<int>> q = {{0,4},{0,2}};

    solve(arr,q);

    return 0;
}