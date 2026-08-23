class Solution {
public:

    void dfs(int node,vector<vector<int>>& isConnected,vector<bool>&visited){
        visited[node]=true;
        for(int neighbour=0;neighbour<isConnected.size();neighbour++){
            if(isConnected[node][neighbour]==1 && !visited[neighbour]){
                dfs(neighbour,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int n= isConnected.size();
        vector<bool>visited(n,false);
        for(int node=0;node<isConnected.size();node++){
            if(!visited[node]){
                count++;
                dfs(node,isConnected,visited);
            }
        }
        return count;
    }
};