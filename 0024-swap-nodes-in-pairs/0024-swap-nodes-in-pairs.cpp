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

    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* dummy = new ListNode(-1);
        ListNode* prevNode=dummy;
        ListNode* currNode=head;
        //dummy->next=head->next;
        while(currNode && currNode->next){
            prevNode->next = currNode->next;
            currNode->next = prevNode->next->next;
            prevNode->next->next= currNode;
            prevNode = currNode;
            currNode = currNode->next;
            
        }
        return dummy->next;
    }
};