int getNthFromLast(Node *head, int n)
{
        Node* curr = head;
        if(curr == NULL) return -1;
        
        int cnt =0;
        while(curr != NULL){
            curr = curr->next;
            cnt++;
            
            
        }
        if(cnt < n) return -1;
        cnt-=n;
        Node* temp = head;
        while(cnt--){
            temp = temp->next;
        }
        return temp->data;
        
    
};