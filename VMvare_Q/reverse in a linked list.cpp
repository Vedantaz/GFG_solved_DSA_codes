lass Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* curr = head;
        Node* prev = NULL;
        Node* nxt = curr->next;
        while(curr != NULL){
            
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            
        }
        head = prev;
        
        
    }
    
};
   