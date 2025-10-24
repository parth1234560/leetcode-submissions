#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];  // sort by second value
        });

        int current_end = INT_MIN;
        int chain_length = 0;

        for (auto& p : pairs) {
            if (p[0] > current_end) {
                chain_length++;
                current_end = p[1];
            }
        }
        return chain_length;
    }
};

