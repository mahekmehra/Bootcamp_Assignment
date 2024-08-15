#include <iostream>
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

void insertTail(Node* &head,int val){ //insertion at tail
    Node* n=new Node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertHead(Node* &head,int val){ //insertion at head
    Node* n=new Node(val);
    n->next=head;
    head=n;
}

void deleteNode(Node* &head,int val){ //deletion with value
    Node* temp=head;
    
    if(head==NULL){
        return;
    }
    
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}


void print(Node* head){ //printing linked list
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//  Question 1: search

bool Search(Node* head,int val){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

//Question 2: reverse
Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}


int main(){
    
    Node* head=NULL;
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    insertTail(head,5);
    print(head);
    insertHead(head,0);
    print(head);
    deleteNode(head,4);
    print(head);
    if(Search(head,0)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
    Node* newhead=reverse(head);
    print(newhead);
}