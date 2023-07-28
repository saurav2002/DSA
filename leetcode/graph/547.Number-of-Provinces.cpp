question : https://leetcode.com/problems/number-of-provinces/


class Solution {
public:

void func(int ind,vector<int>adj[],vector<int> &visited){
    visited[ind]=1;
    for(int u:adj[ind]){
        if(!visited[u]){
            func(u,adj,visited);
        }
        
    }
}

    int findCircleNum(vector<vector<int>>& isConnected) {
         int vertex=isConnected.size();
        vector<int> adj[vertex];
       
        for(int i=0;i<vertex;i++){
            for(int j=0;j<vertex;j++){
                if(isConnected[i][j]==1 && i!=j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<int> visited(vertex,0);
        int count=0;
        for(int i=0;i<vertex;i++){
            if(!visited[i]){
                count++;
                func(i,adj,visited);
            }
        }
        return count;
        
    }
};
