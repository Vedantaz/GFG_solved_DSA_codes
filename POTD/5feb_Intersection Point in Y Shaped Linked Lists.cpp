class Solution
{
public:
    int fcount(Node* head){
        
        Node* temp = head;
        int count =0 ;
        while(temp != NULL){
            temp = temp->next;
            count++;
            
        }
        
        return count;
        
    }
    int intersectPoint(Node* head1, Node* head2)
    {
        
        // Your Code Here
        int count1 = fcount(head1);
        int count2 = fcount(head2);
        int diff = abs(count1 - count2);
        
        if(count1 > count2){
            while(diff--){
                head1 = head1->next;
            }
        }
        else if(count1 < count2){
            while(diff--){
                head2 = head2->next;
                
            }
            
        }
        
        while(head1 != NULL && head2 != NULL){
            
            if(head1 == head2)
            return head1->data;
            
            head1 = head1->next;
            head2 = head2->next;
            
        
        }
        return -1;
    }
};