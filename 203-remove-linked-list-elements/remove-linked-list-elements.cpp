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

    ListNode * solve(ListNode * temp , int val ){

        if(temp == NULL){
            return NULL;
        }

        // if(temp->next == NULL && temp->val == val){
        //     return NULL;
        // }

        temp->next = solve(temp->next,val);


        if(temp->val == val){
            return temp->next;
        }



        // if(temp->next == NULL && temp->val != val){
        //     return temp;
        // }


        return temp;
    }

    ListNode* removeElements(ListNode* head, int val) {

        ListNode * temp = head;

        ListNode * ans = solve(temp , val);
        
        return ans ;
    }
};