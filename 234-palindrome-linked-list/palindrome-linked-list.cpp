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
    bool isPalindrome(ListNode* head) {

        //find the middle of the list 

        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != NULL && fast->next != NULL){
            slow =  slow->next;
            fast = fast->next->next;
        }

        //now the slow will be at the middle 
        ListNode *middle = slow;
        //now reverse the second half of the list;

        ListNode *curr = NULL; 
        ListNode *prev = NULL;

        while(middle != NULL ){
            curr = middle;
            middle = middle->next;
            curr->next = prev;
            prev = curr; 
        }
        ListNode *second = prev ;

        while(second != NULL){
            if(head->val != second->val){
                return 0;
            }
            head = head->next;
            second  = second->next;
        }

        return 1;
    }
};