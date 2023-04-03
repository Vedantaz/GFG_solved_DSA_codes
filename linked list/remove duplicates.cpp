Node *removeDuplicates(Node *head)
{
 // your code goes here
     if(head == NULL || head->next == NULL) return head;
     Node* curr = head;
     while(curr->next!=NULL){
         
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
            
        }
        else{
            curr = curr->next;
            
        }
     }
     return head;
}