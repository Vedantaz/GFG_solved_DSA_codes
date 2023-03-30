lass Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,bool>mp;

        while(head2)

        {

            mp[head2->data]=true;

            head2=head2->next;

        }

        Node *ans=new Node(-1);

        Node *temp=ans;

        while(head1)

        {

            if(mp[head1->data])

            {

                temp->next=new Node(head1->data);

                temp=temp->next;

            }

            head1=head1->next;

        }

        return ans->next;
        
        
    }
};