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
    void reorderList(ListNode* head) {

        //find the middle 
        //then reverse the second half 
        //now traverse one by one and make it to same pattern

        ListNode * temp = head; 
        ListNode * slow = head; 
        ListNode * fast = head; 
        while(fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }

        //now slow will be at the middle    
        //lets reverse the second half now
        ListNode * prev = NULL; 
        ListNode * curr = NULL; 
        ListNode * middle = slow->next; 
        slow->next = NULL;
        while(middle != NULL){
            curr = middle;
            middle = middle->next;
            curr->next = prev;
            prev = curr ;
        }

        ListNode * second = prev; 

        //now its reversed 

        ListNode * t1 = head; 
        ListNode * t2 = second; 
        ListNode * x = head; 

        while(second != NULL){

             ListNode* temp1 = t1->next;
    ListNode* temp2 = second->next;

    t1->next = second;
    second->next = temp1;

    t1 = temp1;
    second = temp2;
            
        }

        
    }
};