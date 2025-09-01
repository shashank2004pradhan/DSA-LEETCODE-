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
    ListNode *detectCycle(ListNode *head) {
        ListNode* s = head;
        ListNode* f = head;
        bool isCycle = false;

        while(f != NULL && f->next != NULL){
            s = s->next;
            f = f->next->next;

            if(s==f){
              isCycle = true;
               break;
            }

        }

        if(!isCycle){
            return NULL;
        }

        s = head;
        ListNode* prev = NULL;


        while( s!=f){
            s = s->next;
            prev =f;
            f = f->next;

        }
      //
        return s;
        
    }
};