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

class LinkedList{
public:
  Node* head;
  LinkedList(){
    head=NULL;
  }
  
  void insertAtTail(int val)
  {
    Node* newNode=new Node(val);
    if(head==NULL){
       head=newNode;
       return;
    }
    else{
       Node* tmp=head;
       while(tmp->next!=NULL)
         tmp=tmp->next;
       
       tmp->next=newNode;
    }
  }
  
  void display()
  {
     Node* tmp=head;
     while(tmp!=NULL){
       cout<<tmp->data<<"->";
       tmp=tmp->next;
     }
     cout<<"NULL\n";
  }
};
void deleteDuplicates(Node* &head)
{
   Node* cur=head;
   while(cur!=NULL)
   {
     while(cur->next!=NULL && (cur->data)==(cur->next->data))
     {
       Node* tmp=cur->next; //node to be deleted
       cur->next=cur->next->next;
       free(tmp);
     }
     cur=cur->next;
   }
}
int main()
{
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
   // ll.insertAtTail(4);
    ll.display();
    deleteDuplicates(ll.head);
    ll.display();
    return 0;
}