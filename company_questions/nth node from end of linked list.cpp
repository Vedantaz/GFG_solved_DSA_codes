int getNthFromLast(Node *head, int n)
{
       // Your code here
        int cnt=0;
        Node* curr = head;
        Node* prev = NULL;
        while(curr != NULL){
            
            Node* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            cnt++;
            
        }
        if(cnt>=n){
            curr = prev;
            for(int i=1; i<n;i++){
                curr = curr->next;
                
            }
            return curr->data;
        }
        else return -1;
}