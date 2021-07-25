#include "bits/stdc++.h"


//Linked list insertion and print
class node{
public:
  int data;
  node* next;

  node(int d)
  {
    data=d;
    next=NULL;
  }
};
node* inserthead(node* &head)
{
  int d;
  cin >> d;
  if(head==NULL)
  {
    head = new node(d);
    return NULL;
  }
  node* temp = new node(d);
  temp->next = head;
  head = temp;
  return head;
}
node* inserttail(node* &head,node* &tail)
{
  int d;
  cin >> d;
  if(head==NULL)
  {
    head=new node(d);
    tail=head;
    return NULL;
  }
  
  tail->next = new node(d);
  tail=tail->next;
  return head;
}
void print(node* head)
{
  while(head!=NULL)
  {
    cout << head->data << ' ';
    head=head->next;
  }
}
void insertmiddle(node* &head,int p,int d)
{
  p--;
  node* mid = head;
  while(p--)
  {
    mid=mid->next;
  }
  node* temp = new node(d);
  temp->next = mid->next;
  mid->next = temp;
}

void deletion(node* head,int p)
{
  p-=2;
  node *temp = head;
  while(p--)
  {
    temp = temp->next;
  }
  temp->next = temp->next->next;
  //delete(temp->next);
}
int main()
{
  node* head = NULL;
  node* tail = NULL;
  inserttail(head,tail);
  inserttail(head,tail);
  inserttail(head,tail);
  insertmiddle(head,2,4);
  deletion(head,3);
  print(head);
}