vector<int> dfs(vector<vector<int>>& adj) {
    // Code here
    if(adj.empty()) return {};
    unordered_set<int> visited;
    stack<int> sky;
    vector<int> result;
    sky.push(0);
    while(!sky.empty()){
        int node=sky.top();
        sky.pop();
        if(visited.find(node)==visited.end()){
            visited.insert(node);
            result.push_back(node);
            for (auto it = adj[node].rbegin(); it != adj[node].rend(); ++it) {
            if (visited.find(*it) == visited.end()) {
                sky.push(*it);
            }
        } 
        }
        
    }
    return result;
}