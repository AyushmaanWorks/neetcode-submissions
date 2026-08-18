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

class Solution {
public:

    unordered_map<Node*, Node*> nodes;

    Node* copyRandomList(Node* head) {

        if (head == nullptr) return nullptr;

        Node* ptr = head;

        while(ptr!= nullptr ){
            Node* temp = new Node(ptr->val); 
            temp->val = ptr->val;
            nodes[ptr] = temp;
            ptr = ptr->next;
        }

        ptr = head;

        while (ptr) {
            nodes[ptr]->next = nodes[ptr->next];
            nodes[ptr]->random = nodes[ptr->random];
            ptr = ptr->next;
        }

        return nodes[head];
    }
};
