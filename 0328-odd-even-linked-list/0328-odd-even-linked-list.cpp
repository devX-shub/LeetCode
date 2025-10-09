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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *ohead = new ListNode(-1), *otail = ohead;
        ListNode *ehead = new ListNode(-1), *etail = ehead;
        ListNode *curr = head, *temp ;
        int idx = 1;
        while (curr) {
           int data = curr->val;
           temp = curr;
           curr = curr->next;
           temp->next = NULL;
           if(idx % 2 == 1)
           {
                otail->next = temp;
                otail = temp;
           }
           else{
            etail->next = temp;
            etail = temp;
           }
           idx++;
        }
        otail->next = ehead->next;
        return ohead->next;
    }
};