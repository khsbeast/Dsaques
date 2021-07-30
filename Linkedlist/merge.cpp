
node* mmerge(node*head1,node*head2)
{
  node *pt3 = new node(-1);
  node *li3 = pt3;
  while(head1!=NULL && head2!=NULL)
  {
    if(head1->data < head2->data)
    {
      pt3->next = head1;
      head1=head1->next;
    }
    else
    {
      pt3->next = head2;
      head2=head2->next;
    }
    pt3=pt3->next;
  }
  while(head1!=NULL)
  {
    pt3->next = head1;
    head1=head1->next;
    pt3=pt3->next;
  }
  while(head2!=NULL)
  {
    pt3->next = head2;
    head2=head2->next;
    pt3=pt3->next;
  }
  return li3;
}
void merge(node*head1,node* head2,node* head3)
{
  if(head1==NULL)
    {
      head3->next=head2;
      return;
    }
  if(head2==NULL)
    {
      head3->next=head1;
      return;
    }
  if(head1->data < head2->data)
  {
    head3->next=head1;
    merge(head1->next,head2,head3->next);
  }
  else
  {
    head3->next=head2;
    merge(head1,head2->next,head3->next);
  }
}