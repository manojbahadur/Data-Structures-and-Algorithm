#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtend(node* &head,int val){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        head = n;
        return;
    }

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;

}

void display(node* head){
    // if(head==NULL){
    //     cout<<"Linked is empty"<<endl;
    //     return;
    // }
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtbeginning(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;

}

bool searchele(node* &head,int val){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(node* &head,int val){
    if(head==NULL) //empty ll
        return;

    if(head->next==NULL){  //only one eelemnt in ll
        if(head->data==val){
            head=head->next;
            return;
        }
        cout<<"Element not found"<<endl;
        return;
    }

    node* temp = head;

    if(temp->data==val){
        head = head->next;
        return;
    }

    while(temp->next->data!=val){
        if(temp->next->next==NULL){
            cout<<"Element not found"<<endl;
            return;
        }
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while (currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
    
}

node* reverseRecursive(node* &head){
    if(head==NULL || head->next==NULL)
        return head;
    
    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next = NULL;
    return newhead;
}

node* reverseKGroup(node* &head, int k)
    {
        node* previous=NULL;
        node* current=head;
        node* nxt=NULL;
        
        node * check;
        check=current;

        
        int count=1;
        while(check->next!=NULL&&count<=k)
        {
            count++;
            check=check->next;
        }
        if(count<k)
            return head;

        count=0;
        
        while(current!=NULL&&count<k)
        {
            nxt=current->next;
            current->next=previous;
            previous=current;
            current=nxt;
            count++;
        }
        
        if(nxt!=NULL)
        {
            head->next=reverseKGroup(nxt,k);
        }
        
        return previous;
    }

int main(){
    node* head=NULL;
    insertAtend(head,0);
    insertAtend(head,1);
    insertAtend(head,2);
    insertAtend(head,3);
    insertAtend(head,4);
    insertAtend(head,5);
    display(head);
    node* newHead = reverseKGroup(head,4);
    display(newHead);
   

    return 0;
}