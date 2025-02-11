
// Given a linked list, determine if it has a cycle in it.
// Time complexity: O(n)
// Space complexity: O(n)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> mp;

        ListNode* dummy = head;

        while(dummy) {
            if(mp.find(dummy) != mp.end())
                return 1;
            mp.insert(dummy);
            dummy = dummy->next;
        }

        return 0;
    }
};

// Time complexity: O(n)
// Space complexity: O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(fast == NULL ) return 0;
        while(fast->next and slow->next) {
            if(!fast->next->next)
                break;
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){
                return 1;
            }
        }
        return 0;
    }
};

