node* previous = NULL;
void reverse(node*&head)
{
  while(head->next!=NULL)
  {
    node* temp = head->next;
    head->next=previous;
    previous = head;
    head=temp;
  }
  head->next=previous;
}
node* head2;
void reverserec(node*head)
{
  if(head->next == NULL)
  {
    head2 = head;
    return;
  }
  reverserec(head->next);
  node* temp = head->next;
  temp->next=head;
  head->next=NULL;
}