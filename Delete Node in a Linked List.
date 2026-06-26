class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;

    // Alternative, we can copy next node's properties directly with
        // *node = *node->next;
    }
};
