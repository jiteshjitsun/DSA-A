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
    ListNode* middleNode(ListNode* head) {
        // naive or brute force 
        ListNode* nakli = head;
        int cnt = 0;
        while(nakli != NULL) {
            cnt+=1;
            nakli = nakli->next;
        }
        int n = cnt/2;
        while(n--){
            head = head->next;
        }
        return head;
    }
};

// fast and slow pointers 
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL and fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};