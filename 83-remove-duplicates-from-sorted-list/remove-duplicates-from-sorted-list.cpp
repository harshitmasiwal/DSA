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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode * p = head;

        if(head == NULL) return head;

        ListNode * temp = p->next;

        while(temp != NULL){
            if(temp->val != p->val){
                p->next = temp;
                p = p->next;
            }

            if(temp->next == NULL){
                p->next = NULL;
            }

            temp = temp->next;
            
        }
        
        return head;
    }
};