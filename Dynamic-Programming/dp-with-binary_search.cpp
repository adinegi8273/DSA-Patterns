/*
Problem - Maximum Profit in Job Scheduling

We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].

You're given the startTime, endTime and profit arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

If you choose a job that ends at time X you will be able to start another job that starts at time X.

 Constraints:

1 <= startTime.length == endTime.length == profit.length <= 5 * 104
1 <= startTime[i] < endTime[i] <= 109
1 <= profit[i] <= 104



Solution - 


class Solution {
public:

    int binarySearch(int low,int high,vector<int>&a, vector<int>& startTime,int end){

        int ans = a.size();
        while(low <= high){

            int mid = low + floor((high-low)/2);

            int start = startTime[a[mid]];
            if(start >= end){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return ans;
    }

    int dp[50001];

    int solve(int index,vector<int>& a,vector<int>& startTime,vector<int>& endTime,vector<int>& profit){


        if(index == a.size()){
            return 0;
        }

        if(dp[index] != -1) return dp[index];

        //either to perform this job or to skip this job

        //skip this job

        int job = a[index];
        int take = 0,skip = 0;

        skip = solve(index+1,a,startTime,endTime,profit);

        //if i take this job then i must find out the next job which has startTime just greater than this

        int next = binarySearch(index+1,a.size()-1,a,startTime,endTime[job]);

        take = solve(next,a,startTime,endTime,profit) + profit[job];

        return dp[index] = max(take,skip);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
        int n = startTime.size();
        vector<int> a(n);

        for(int i=0;i<n;i++){
            a[i] = i;
        }

        auto lamda = [&](int i,int j){
            if(startTime[i] == startTime[j]){
                return endTime[i] < endTime[j];
            }
            return startTime[i] < startTime[j];
        };


        sort(a.begin(),a.end(),lamda);
        memset(dp,-1,sizeof(dp));
        return solve(0,a,startTime,endTime,profit);
    }
};

*/