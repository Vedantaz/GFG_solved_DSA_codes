class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        unordered_set<int> res;
        Node* curr = head;
        if(curr == NULL) return head;
        else{
            res.insert(curr->data);
        }
        
        while(curr != NULL && curr->next != NULL){
            if(res.find(curr->next->data) != res.end()){
                curr->next = curr->next->next;
                
            }
            else{
                res.insert(curr->next->data);
                curr = curr->next;
            }
        }
        return head;
        
        
    }
};