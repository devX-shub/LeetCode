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
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                slow = head;

                // Phase 2: Find the first node of the loop
                while (slow != fast) {

                    // Move slow and fast one step
                    // at a time
                    slow = slow->next;
                    fast = fast->next;

                    // When slow and fast meet again,
                    // it's the first node of the loop
                }

                // Return the first node of the loop
                return slow;
            }
        }
        //
        return NULL;
    }
};