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

int getlength(Node* head){ //length of linked list
    int len=0;
    if(head==NULL){
        return 0;
    }
    Node *first =head;
    while(first->next!=head){
        len++;
        first=first->next;
    }
    len++;
    return len;
}

Node *LastNode(Node* head){ //return last node
    if(head==NULL){
        return 0;
    }
    Node *first=head;
    while(first->next!=head){
        first=first->next;
    }
    return first;
}

void insertTail(Node* &head,int val){ //insertion at tail
    Node* n=new Node(val);
    
    if(head==NULL){
        head=n;
        head->next=head;
        return;
    }
    Node* temp=head;
    if(temp->next==head){
        temp->next=n;
        temp=temp->next;
        temp->next=head;
        return;
    }
    
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    temp=temp->next;
    temp->next=head;
    
}

void insertHead(Node* &head,int val){ //insertion at head
    Node* n=new Node(val);
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next=head;
    temp->next=n;
    head=n;
}

int deleteNode(Node* &head ,int position){ //deletes node using position
    int len=getlength(head);
    if(head==NULL || position<0 || position>len){
        return 0;
    }
    if(position==0){
        Node *nodeDelete=head;
        if(len==1){
            head=NULL;
            delete(nodeDelete);
            return 1;
        }
        Node *lastNode=LastNode(head);
        lastNode->next=head->next;
        head=head->next;
        delete(nodeDelete);
        return 1;
    }
    Node *first=head;
    while(position-1>0){
        first=first->next;
        position--;
    }
    Node *nodeDelete=first->next;
    first->next=first->next->next;
    delete(nodeDelete);
    return 1;
}



void print(Node* head){ //printing linked list
    Node* temp =head;
    if(head==NULL){
        cout<<"NULL"<<endl;
    }
    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
    temp=temp->next;
    cout<<"->"<<temp->data<<endl;
}

//Question
bool iscircular(Node* head){ //checks if circular
    Node* temp=head;
    while(temp!=head || temp!=NULL){
        if(temp->next==head){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){
    
    Node* head=NULL;
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    print(head);
    insertHead(head,0);
    print(head);
    if(iscircular(head)){
        cout<<"It is a circular linked list\n";
    }
    else{
        cout<<"It is not a circular linked list\n";
        
    }
    deleteNode(head,4);
    print(head);
    deleteNode(head,0);
    print(head);
}
