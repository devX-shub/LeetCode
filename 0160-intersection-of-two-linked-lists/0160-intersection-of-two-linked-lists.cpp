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
        ListNode *head1 = headA;
        ListNode *head2 = headB;
    //     while(head2 != NULL) {
    //     ListNode* temp = head1;
    //     while(temp != NULL) {
    //         //if both nodes are same
    //         if(temp == head2) return head2;
    //         temp = temp->next;
    //     }
    //     head2 = head2->next;
    // }
    // //intersection is not present between the lists return null
    // return NULL;
     ListNode* d1 = head1;
    ListNode* d2 = head2;
    
    while(d1 != d2) {
        d1 = d1 == NULL? head2:d1->next;
        d2 = d2 == NULL? head1:d2->next;
    }
    
    return d1;
    }
};