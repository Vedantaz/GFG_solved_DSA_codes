
// take slow and fast 
// floyd's algorithm ..

// slow  = slow->next;
// fast = fast->next->next;
// first time -> if they are equal ,  then it is a loop
// then 
// slow  = slow->next;
// fast = fast->next;

// second time -> if they are equal again > then eqaul at the point is the starting point 

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        if (head == NULL || head->next == NULL)
        return;
  
        Node *slow = head, *fast = head;
      
        slow = slow->next;
        fast = fast->next->next;
      
        while (fast && fast->next) {
            if (slow == fast)
                break;
            slow = slow->next;
            fast = fast->next->next;
        }
      
        if (slow == fast) 
        {
            slow = head;
                
            if(slow == fast) {
                  while(fast->next != slow) fast = fast->next;
            }
            else {
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
      
            fast->next = NULL; 
        }
    }
};