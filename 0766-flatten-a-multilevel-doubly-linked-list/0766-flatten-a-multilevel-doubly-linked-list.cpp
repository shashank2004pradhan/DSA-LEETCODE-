/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        //base case
        if(head == NULL) return head;
        Node* curr = head;

        while(curr != NULL){

            if(curr->child != NULL){
                Node* nxt = curr->next;

                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                while(curr->next != NULL){
                    curr = curr->next;
                }
                if(nxt != NULL){
                    curr->next = nxt;
                    nxt->prev = curr;
                }
            }






            curr = curr->next;
        }
        









        return head;
    }
};