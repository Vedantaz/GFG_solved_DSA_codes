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
   

// we use curr as new node of head {actual node}
// because >> if head is disturbed then all linked list can be lot completely

for(Node* curr = head; curr!= NULL; curr = curr->next){
    
    data.push_back(curr->data);
    cout<< "Node value "<<  curr -> data << endl ; 

}
   
