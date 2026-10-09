/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }; a->b->c->d->nullptr 
      c n 
      p = nullptr
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* current = head;
        ListNode* prev = 0;

        while(current){
            ListNode* temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        return prev;
    }
};
