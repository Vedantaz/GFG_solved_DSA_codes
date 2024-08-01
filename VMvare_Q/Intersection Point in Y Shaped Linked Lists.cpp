int length(Node* head){
    
    int len =0;
    while(head!= NULL){
        len++;
        head = head->next;
        
    }
    return len;
    
}

int intersectPoint(Node* head, Node* curr)
{
   
    int x = length(head);
    int y = length( curr);
    
    Node* a = head;
    Node* b = curr;
    
    if(x>y){
        a = head;
        b = curr;
        
    }
    else{
        a = curr;
        b = head;
        
    }
    int d= abs(x-y);
    
    while(d){
        
        a = a->next;
        d--;
        
    }
    
    while(a!= NULL && b != NULL){
        
        if(a == b){
            return a->data;
        }
        a = a->next;
        b = b->next;
    }
    return -1;
    
}
