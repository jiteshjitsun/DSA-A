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
        ListNode* ans = new ListNode();
        ListNode* res = ans;
        int carry = 0;
        while(l1!=NULL or l2!=NULL or carry != 0) {
            int sum = carry;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            } 
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            int rem = sum%10;
            ans->next = new ListNode(rem);
            ans = ans->next;
        }
        return res->next;
    }
};

