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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;

        ListNode* dummy = head;
        ListNode* ans = head;
        while(dummy!=NULL) {
            cnt+=1;
            dummy = dummy->next;
        }

        int rem = cnt - n;
        if(cnt == n) {
            return head->next;
        }
        while(rem--) {
            if(rem==0){
                ans->next = ans->next->next;
            }
            else
                ans = ans->next;
        }
        return head;
    }
};


// optimal solution in one pass 
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(n--) {
            fast = fast->next;                  
        }
        if(fast==NULL) return slow->next;
        while(fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
        }

        if(slow->next==NULL) return slow;
        slow->next = slow->next->next;
        return head;
    }
};