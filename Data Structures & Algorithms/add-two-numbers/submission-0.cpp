/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = l1;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* prev = nullptr;
        int carry = 0;


        while(p1||p2||carry){
            int sum = carry;

            if(p1)
                sum += p1->val;

            if(p2)
                sum += p2->val;

            carry = sum / 10;

            if(p1) {
                p1->val = sum % 10;
                prev = p1;
                p1 = p1->next;
            }
            else {
                prev->next = new ListNode(sum % 10);
                prev = prev->next;}

            if(p2){
                p2 = p2->next;
            }
            

        }

        return ans;

    }
};
