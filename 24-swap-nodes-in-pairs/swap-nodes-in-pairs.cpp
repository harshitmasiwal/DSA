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

    ListNode * solve(ListNode* left ,ListNode* head ){

        if(left == NULL ){
            return NULL;
        }

        ListNode * right = left->next;
        ListNode * temp = NULL;

        if(right != NULL){
            temp = right->next;
            right->next = left;
        }
        else{
            //it means last element alone hai so direct append it
            return left;
        }
        //now swap them
        
        left->next = solve(temp,head);

        return right;
    }

    ListNode* swapPairs(ListNode* head) {
        
        ListNode * ans = solve(head,head);
        return ans;
    }
};