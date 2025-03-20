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
        ListNode* removeElements(ListNode* head, int val) {
           ListNode* ans = new ListNode(0,head);
           ListNode*temp = ans;
    
            while(temp!=nullptr){
                while(temp->next!=nullptr && temp->next->val==val){
                    temp->next = temp->next->next;
                }
                temp = temp->next;
            }
            ListNode*  res =ans->next;
            delete ans;
            
            return res;
        }
    };