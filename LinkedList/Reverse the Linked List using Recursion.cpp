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
Node* ReverseLL(Node* &cur,Node* prev)
{
  if(cur==NULL)return prev;
  Node* next=cur->next;
  cur->next=prev;
  return ReverseLL(next,cur);
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
    ll.display();
    
    ll.head=ReverseLL(ll.head,NULL);
    ll.display();
    return 0;
}