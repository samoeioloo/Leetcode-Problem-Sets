/**
 * @file MergeTwoLinkedListsSort.cpp
 * @author Samoei Oloo
 * @brief 
 * @version 0.1
 * @date 2021-02-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 
 
 // Definition for singly-linked list.
  struct ListNode {
      int val;  contains stored value
      ListNode *next; node pointer to next node
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0); 
        ListNode *tail = head; //0 node created is first and last node of linkedlist
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val <= l2-> val){
                tail->next = l1; //tail points to this node
                l1 = l1->next; //node now points to next node in linkedlist
                tail = tail->next; 
                tail->next =NULL;
            }
            else{
                tail->next =l2;
                l2 = l2->next;
                tail = tail->next;
                tail->next=NULL;
            }
        }
            
            if(l1) {tail->next=l1;}
            if(l2) {tail->next=l2;}
            
            tail=head;
            head=head->next;
            delete tail;
            
        
            return head;
    }
     
};