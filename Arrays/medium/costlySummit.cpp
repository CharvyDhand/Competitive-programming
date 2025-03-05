#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, C;
    cin >> N >> C;
    string S;
    cin >> S;

    map<char, int> freq;
    for (char c : S) {
        freq[c]++;
    }

    int minCost = INT_MAX;

    for (auto it : freq) {
        int count = it.second;
        int translatorCount = N - count;
        int translatorCost = (translatorCount * (translatorCount + 1)) / 2;
        int totalCost = C + translatorCost;
        minCost = min(minCost, totalCost);
    }

    int translatorCostAll = (N * (N + 1)) / 2;
    minCost = min(minCost, translatorCostAll);

    cout << minCost << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}