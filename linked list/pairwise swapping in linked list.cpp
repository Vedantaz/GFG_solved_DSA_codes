Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(!head || !head->next) return head;
        
        struct Node* prev = NULL;
        struct Node* first = head;
        struct Node* second = head->next;
        
        while(second && first){
            if(prev == NULL) head = second;
            else{
                prev->next = second;
                
            }
            first->next = second->next;
            second->next = first;
            prev = first ;
            first = first->next;
            if(first!= NULL){
                second = first->next;
                
            }
            
        }
        return head;
    }