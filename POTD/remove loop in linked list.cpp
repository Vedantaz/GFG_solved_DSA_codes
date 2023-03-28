class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        Node* curr = head;
        while(curr != NULL && curr->next != NULL){
            if(curr->next != NULL && curr->next->data == -1){
                curr->next = NULL;
            }
            curr->data = -1;
            curr = curr->next;
        }
        
    }
};