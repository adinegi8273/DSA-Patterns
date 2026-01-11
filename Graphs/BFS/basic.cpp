// Patterns 1 recognition - “Find the shortest distance / minimum steps / minimum moves / minimum transformations.”

/*
    Shortest path in an unweighted graph.

    Word Ladder (LeetCode 127)

    Rotten Oranges (LeetCode 994)

    Minimum Knight moves (LeetCode 1197)
*/

#include<bits/stdc++.h>

using namespace std;

// 1. Shortest path in an unweighted graphs

//i have submitted this code on gfg

//code starts ------------------------------------------------------------------------------------->

// class Solution {
//   public:
//     // Function to find the shortest path from source to all other nodes
//     vector<int> shortestPath(vector<vector<int>>& adj, int src) {
       
//        int n = adj.size();
//        vector<int> distance(n,INT_MAX);
       
//        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//        pq.push({0,src});
//        distance[src] = 0;
       
//        //dikstra's algorithm
       
//        while(!pq.empty()){
//            auto top = pq.top();pq.pop();
//            int node = top.second;
          
//            //access all the neighbours of node
//            for(int neigh:adj[node]){
               
//                //relaxation
//                if(distance[node] +1 < distance[neigh]){//unit weight of every edge
//                    distance[neigh] = distance[node]+1;
//                    pq.push({distance[neigh],neigh});
//                }
//            }
//        }
       
//        for(int i=0;i<n;i++){
//            if(distance[i] == INT_MAX) distance[i] = -1;
//        }
       
//        return distance;
       
//     }
// };


//code finishes--------------------------------------------------------------------------------------->


// 2. Word ladder

// class Solution {
// public:
//     int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        

//         unordered_set<string> st(wordList.begin(),wordList.end());//O(nlogn)
//         st.insert(beginWord);//O(logn)
//         queue<string> q;//O(n)
//         q.push(beginWord);
//         int sequence_length = 1;

//         while(!q.empty()){//O(V+E)
//             ++sequence_length;
//             int size = q.size();

//             for(int i=0;i<size;i++){

//                 string currentWord = q.front();
//                 q.pop();

//                 for(int j=0;j<currentWord.size();j++){//O(m)
                    
//                     char originalChar = currentWord[j];

//                     for(int k=0;k<26;k++){//O(26) or O(1)
                        
//                         currentWord[j] = 'a'+k;
//                         if(!st.count(currentWord)) continue;

//                         if(currentWord == endWord) return sequence_length;

//                         //push the new entry which is present in set into the queue also
//                         q.push(currentWord);

//                         st.erase(currentWord);
//                         //to avoid revisiting
//                     }

//                     currentWord[j] = originalChar;
//                 }
                
//             }

//         }   
//         return 0;

//         //time complexity is O(n * m) Space complexity is O(n)

//     }
// };



//code finishes--------------------------------------------------------------------------------------->

// 3. Rotten Oranges

//Code starts ----------------------------------------------------------------------------------------------------

// bool inplace(int row,int col ,int n,int m){

//     if(row >= n || row < 0 || col < 0 || col >= m) return false;
//     return true;
// }

// int orangesRotting(vector<vector<int>>& grid){


//     int n = grid.size();
//     int m = grid[0].size();

//     queue<pair<int,int>> q;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){

//             if(grid[i][j] == 2){
//                 q.push({i,j});///push the positions
//             }
//         }
//     }

//     int time = 0;

//     vector<pair<int,int>> directions= {{-1,0},{0,-1},{0,1},{1,0}};//this means in 4 directions we can go

//     while(!q.empty()){

//         int size = q.size();
        
//         for(int i=0;i<size;i++){
//             pair<int,int> current = q.front();q.pop();

//             for(auto dir:directions){

//                 int row = dir.first + current.first;
//                 int col = dir.second + current.second;

//                 if(inplace(row,col,n,m) && grid[row][col] == 1){///also there should be one orange present there
//                     q.push({row,col});
//                     grid[row][col] = 2;//becuase now it has become rotten
//                 }
//             }
//         }
//         if(q.size() > 0) time++;//because we have rotten oranges at the next lkevel
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(grid[i][j] == 1) return -1;
//         }
//     }



//     return time;
// }

// int main(){

//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> grid(n,vector<int>(m));

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>grid[i][j];
//         }
//     }

//     cout<<"Minimum time is:"<<orangesRotting(grid);
//     return 0;

// }



// code finishes---------------------------------------------------------------------------------------------------------



int minimumKnightMoves(int x,int y){

    queue<pair<int,int>> q;

    q.push({0,0});

    set<pair<int,int>> st;

    st.insert({0,0});

    int moves = 0;
    bool flag = false;
    
    vector<pair<int,int>> directions = {{-2,-1},{2,1},{1,2},{-1,-2},{1,-2},{-2,1},{2,-1},{-1,2}};
    while(!q.empty()){

        int size = q.size();
        for(int i=0;i<size;i++){

            pair<int,int> current = q.front();q.pop();
            if(current.first == x && current.second == y){
                flag = true;
                break;
            }

            for(auto dir:directions){

                int row = dir.first + current.first;
                int col = dir.second + current.second;
                
                if(st.find({row,col}) == st.end()){
                    //not previously visited
                    q.push({row,col});
                    st.insert({row,col});
                }
            }
        }
        if(flag == true) break;
        
        if(q.size() > 0) moves++;
    }

    return moves;
}
int main(){

    int x,y;
    cin>>x>>y;

    cout<<minimumKnightMoves(x,y);
    return 0;
}