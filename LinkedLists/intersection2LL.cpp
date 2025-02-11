
// The space complexity of this code is O(1) because it uses a constant amount of additional space. 
//It does not create any new data structures or use any additional memory that grows with the input size.

// The time complexity of this code is O(n^2), where n is the length of the longer linked list. 
//This is because the code uses nested loops to compare each node of the first linked list with each node of the second linked list.
// In the worst case, it needs to iterate through all the nodes of both linked lists, resulting in a quadratic time complexity.


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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt = 0;
        while(headA!=NULL) {
            ListNode* temp = headB;

            while(temp!=NULL) {
                cout<<headA->val<<" "<<temp->val<<endl;
                if(headA!=temp) {
                    temp = temp->next;
                    continue;
                }
                if(headA==temp) {
                    return temp;
                }
            }
            headA = headA->next;
        }

        return NULL;
    }
};



// The time complexity of this code is O(n), where n is the length of the longer linked list. 
// This is because the code iterates through both linked lists once to calculate their lengths, 
// and then iterates through the common part of the linked lists once to find the intersection node.

// The space complexity of this code is O(1) because it uses a constant amount of additional space. 
// It does not create any new data structures or use any additional memory that grows with the input size.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* dummyA = headA;
        ListNode* dummyB = headB;
        int cnt1 = 0, cnt2 = 0;
        while(dummyA!=NULL) {
            dummyA = dummyA->next;
            cnt1+=1;
        }        
        while(dummyB!=NULL) {
            dummyB = dummyB->next;
            cnt2+=1;
        }

        if(cnt1>cnt2) {
            int rem = cnt1-cnt2;
            while(rem--) {
                headA = headA->next;
            }
            while(headA!=headB) {
                headA = headA->next;
                headB = headB->next;
            }
            return headA;
        } else if(cnt2>cnt1) {
            int rem = cnt2-cnt1;
            while(rem--) {
                headB = headB->next;
            }
            while(headA!=headB) {
                headA = headA->next;
                headB = headB->next;
            }
            return headA;
        } else {
            while(headA!=headB) {
                headA = headA->next;
                headB = headB->next;
            }
            return headA;
        }

        return NULL;
    }
};


// The time complexity of this code is O(n), where n is the length of the longer linked list.
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA = headA;
        ListNode* currB = headB;

        while (currA != currB) {
            currA = currA ? currA->next : headB;
            currB = currB ? currB->next : headA;
        }

        return currA;
    }
};

