class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // support variables
        int len = nums.size() - k + 1;
        vector<int> res(len);
        deque<int> dq;
        // preparing dq with the first k - 1 elements
        k--;
        for (int i = 0; i < k; i++) {
            while (dq.size() && nums[dq.back()] < nums[i]) dq.pop_back();
            dq.push_back(i);
        }
        k++;
        // parsing through nums
        for (int i = 0, n = k - 1; i < len; i++, n++) {
            // popping smaller values
            while (dq.size() && nums[dq.back()] <= nums[n]) dq.pop_back();
            // adding the current index n
            dq.push_back(n);
            // updating res
            res[i] = nums[dq.front()];
            // popping the first element out
            if (dq.front() == i) dq.pop_front();
        }
        return res;
    }
};
