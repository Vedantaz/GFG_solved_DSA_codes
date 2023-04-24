Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* curr = head;
    if (x == 1) {
            
            return head->next;
        }
        
    x-=2;
    
    while(x--){
            
        curr = curr->next;
    }
    curr->next = curr->next->next;
    
    return head;
}