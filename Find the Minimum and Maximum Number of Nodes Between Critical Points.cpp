class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> res(2, -1);
        int prev_critical_ind = -1, first_critical_ind = -1;
        ListNode* prev = head;
        ListNode* cur = head->next;
        int cur_ind = 1;

        while (cur->next != nullptr) {
            if ((cur->val > prev->val && cur->val > cur->next->val) ||
                (cur->val < prev->val && cur->val < cur->next->val)) {
                if (prev_critical_ind != -1) {
                    res[0] = (res[0] == -1) ? cur_ind - prev_critical_ind : min(res[0], cur_ind - prev_critical_ind);
                } else {
                    first_critical_ind = cur_ind;
                }
                prev_critical_ind = cur_ind;
            }
            prev = cur;
            cur = cur->next;
            cur_ind++;
        }

        if (prev_critical_ind != -1 && prev_critical_ind != first_critical_ind) {
            res[1] = prev_critical_ind - first_critical_ind;
        }

        return res;
    }
};
