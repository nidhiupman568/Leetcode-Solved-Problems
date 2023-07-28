/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head == nullptr) return head;
        Node* curr = head;
        Node* temp;
        
        while(curr)
        {
            temp = curr->next;
            curr->next = new Node(curr->val,nullptr, nullptr);
            curr->next->next = temp;
            curr = temp;
        }
        
        curr = head;
        while(curr)
        {
            if(curr->next && curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next ? curr->next->next : curr->next;
        }
        
        Node* original = head;
        Node* copy = head->next;
        temp = copy;
        
        while(original && copy)
        {
            original->next = original->next ? original->next->next : original->next;
            copy->next = copy->next ? copy->next->next : copy->next;
            
            original = original->next;
            copy = copy->next;
        }
        return temp;
    }
};
