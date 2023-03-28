class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
       
        // if(head == NULL || head->next == NULL || k==1) return ;
        
        node* curr = head, *nxt = NULL, *prev = NULL ;
        
        int cnt = 0;
        
        
        while(curr != NULL  && cnt < k){
            
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            cnt++;
            
        }
        
        if(nxt!= NULL){
            head->next = reverse(nxt, k);
            
        }
        return prev;
    }
};