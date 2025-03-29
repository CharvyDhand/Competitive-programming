#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
using namespace std;
vector<int> parent;

int find(int x) {
    if (parent[x] == x) return x; 
    return parent[x] = find(parent[x]); 
}
vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
    int n = profit.size();
    
    vector<pair<int, int>> jobs;
    for (int i = 0; i < n; i++) {
        jobs.push_back({profit[i], deadline[i]});
    }
    sort(jobs.begin(), jobs.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.first > b.first; 
    });

    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        maxDeadline = max(maxDeadline, jobs[i].second);
    }

    parent.resize(maxDeadline + 1);
    for (int i = 0; i <= maxDeadline; i++) {
        parent[i] = i;
    }

    int countJobs = 0, totalProfit = 0;

    for (int i = 0; i < n; i++) {
        int jobProfit = jobs[i].first;
        int jobDeadline = jobs[i].second;

        int availableSlot = find(jobDeadline);

        if (availableSlot > 0) {
            countJobs++;
            totalProfit += jobProfit;
            parent[availableSlot] = find(availableSlot - 1);
        }
    }

    return {countJobs, totalProfit};
}
int main() {
    vector<int> deadline = {4, 1, 1, 1};
    vector<int> profit = {20, 10, 40, 30};

    vector<int> result = jobSequencing(deadline, profit);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}