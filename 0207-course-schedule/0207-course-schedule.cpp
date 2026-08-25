class Solution {
public:

    bool dfs(int node,
             vector<vector<int>>& graph,
             vector<int>& state) {

        // Currently visiting → cycle
        if(state[node] == 1) {
            return false;
        }

        // Already completely processed
        if(state[node] == 2) {
            return true;
        }

        // Mark as currently visiting
        state[node] = 1;

        // Visit neighbours
        for(int neighbor : graph[node]) {

            if(!dfs(neighbor, graph, state)) {
                return false;
            }
        }

        // Completely processed
        state[node] = 2;

        return true;
    }


    bool canFinish(int numCourses,
                   vector<vector<int>>& prerequisites) {

        // Create graph
        vector<vector<int>> graph(numCourses);

        // Build graph
        for(auto p : prerequisites) {

            int course = p[0];
            int prerequisite = p[1];

            graph[prerequisite].push_back(course);
        }

        // 0 = not visited
        // 1 = currently visiting
        // 2 = completely processed
        vector<int> state(numCourses, 0);

        // Check every course
        for(int i = 0; i < numCourses; i++) {

            if(!dfs(i, graph, state)) {
                return false;
            }
        }

        return true;
    }
};