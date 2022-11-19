/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* ptr=head;
    int i=0;
    while(ptr!=NULL){
        ptr=ptr->next;
        i++;
    }
    int x=i/2;
    int j=0;
    struct ListNode* ptr2=head;
    while(j!=x){
        ptr2=ptr2->next;
        ptr2=head;
        j++;
        struct ListNode* temp=head;   
        head = (head)->next;
        free(temp);
    }
    return head;
}
