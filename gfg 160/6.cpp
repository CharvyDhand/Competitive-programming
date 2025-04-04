vector<int> parent(V);
for (int i = 0; i < V; ++i) {
    parent[i] = i;
}

auto find = [&](int u) {
    while (parent[u] != u) {
        parent[u] = parent[parent[u]]; // Path compression
        u = parent[u];
    }
    return u;
};

for (const auto& edge : edges) {
    int u = edge[0];
    int v = edge[1];
    int root_u = find(u);
    int root_v = find(v);
    if (root_u == root_v) {
        return true;
    }
    parent[root_v] = root_u; // Union
}
return false;