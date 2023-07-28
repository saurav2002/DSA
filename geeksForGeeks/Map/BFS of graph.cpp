// Question : https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
class solution{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<bool>visited(V,false);
        vector<int>result;
        queue<int>q;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            result.push_back(top);
            for(auto i:adj[top]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=1;
                }
                
            }
        }
        
        return result;
    }
}
