Node* SortedMerge(Node* head1,   Node* head2)
{
  Node* temp1=head1;
  Node* temp2=head2;
  Node* head=NULL;
  
  if(head1->data<head2->data)
  {
      head=temp1;
      temp1=temp1->next;
      
  }
  else
  {
      head=temp2;
      temp2=temp2->next;
      
  }
  Node* temp=head;
  
  while(temp1 && temp2)
{
    if(temp1->data<temp2->data)
    {
      temp->next=temp1;
      temp1=temp1->next;
      temp=temp->next;
    }
    else
    {
        temp->next=temp2;
        temp2=temp2->next;
        temp=temp->next;
    }
}
while(temp1)
{
    temp->next=temp1;
    temp1=temp1->next;
    temp=temp->next;
}
while(temp2)
{
    temp->next=temp2;
    temp2=temp2->next;
    temp=temp->next;
}

temp->next=NULL;
return head;

  
  
  
}