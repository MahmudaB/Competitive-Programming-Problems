//In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node* next;
  Node(int val){
     data=val;
     next=NULL;
  }
};
void insertAtHead(Node* &head,int val)
{
   Node* newnode=new Node(val);
   newnode->next=head;
   head=newnode;
}
void insertAtTail(Node* &head,int val)
{
  Node* newnode=new Node(val);
  Node* tmp=head;
  while(tmp->next!=NULL)
   tmp=tmp->next;
  
  tmp->next=newnode;
}
void insertAtPosition(Node* &head,int pos,int val)
{
  if(pos==0){
    insertAtHead(head,val);
    return;
  }
  
  Node* newnode=new Node(val);
  Node* Tmp=head;
  int curr_pos=0;
  
  while(curr_pos!=pos-1){
    Tmp=Tmp->next;
    curr_pos++;
  }

  newnode->next=Tmp->next;
  Tmp->next=newnode;
}
void display(Node* head)
{
   Node* tmp=head;
   while(tmp!=NULL)
   {
      cout<<tmp->data<<"->";
      tmp=tmp->next;
   }
   cout<<"NULL\n";
}
int main()

{
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtPosition(head,1,2);
    insertAtPosition(head,2,3);
    insertAtPosition(head,3,5);
    insertAtPosition(head,3,4);
    insertAtTail(head,6);
    insertAtPosition(head,4,8);
    display(head);
    
    return 0;
}