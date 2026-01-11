// Pattern 2 - Multilayer BFS traversal

/* 
Rotting Oranges

Fire spread or Zombie infection

Word Ladder (count steps)

Minimum depth of binary tree

*/

#include<bits/stdc++.h>

using namespace std;


// 1. Minimum Depth of Binary Tree


// -----code starts--------------------------------------------------------------------------------------------

//  typedef TreeNode node;
// class Solution {
// public:
//     int minDepth(TreeNode* root) {
        
//         if(root == NULL) return 0;

//         queue<node*> q;
//         q.push(root);

//         int depth = 0;

//         bool flag = false;
//         while(!q.empty()){

//             int size = q.size();
//             depth++;
//             for(int i=0;i<size;i++){
//                 node* root = q.front();
//                 q.pop();
                
//                 if(root->left == NULL && root->right == NULL){
//                     //this is first node which is a shortest distance with the root
//                     flag =true;
//                     break;
//                 }
            
//                 if(root->left != NULL) q.push(root->left);
//                 if(root->right != NULL) q.push(root->right);
//             }
//             if(flag == true) break;
//         }

//         return depth;
//     }
// };
// ---------------code ends----------------------------------------------------------------------------------------