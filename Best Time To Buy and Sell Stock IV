#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <numeric>
using std::stack;
using std::pair;
using std::vector;
using std::nth_element;
using std::accumulate;

class Solution {

public:
    int maxProfit(int k, const vector<int>& prices) {
        vector<int> profits;
        stack<pair<int, int>> vps;
        int v = 0;
        int p = -1;
        
        const int n = prices.size();
        for (;;) {
            for (v = p + 1; (v + 1) < n && prices[v] >= prices[v + 1]; ++v);
            for (p = v; (p + 1) < n && prices[p] <= prices[p + 1]; ++p);
            if (p == v) break;
            
            while (!vps.empty() && prices[vps.top().first] >= prices[v]) {
                auto vp = vps.top();
                profits.push_back(prices[vp.second] - prices[vp.first]);
                vps.pop();
            }
            while (!vps.empty() && prices[vps.top().second] <= prices[p]) {
                profits.push_back(prices[vps.top().second] - prices[v]);
                v = vps.top().first; //  (v1, p2)
                vps.pop();
            }
            vps.emplace(v, p);
        }
        while (!vps.empty()) {
            auto vp = vps.top(); vps.pop();
            profits.push_back(prices[vp.second] - prices[vp.first]);
        }
        if (k >= profits.size()) {
            return accumulate(profits.begin(), profits.end(), 0);
        } else {
            nth_element(profits.begin(), profits.end() - k, profits.end());
            return accumulate(profits.end() - k, profits.end(), 0);
        }
    }
};
