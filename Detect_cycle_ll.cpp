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

void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startNOde;
    int cnt = 1;

    while(temp->next!=NULL){
        if(cnt==pos){
            startNOde = temp;
        }
        temp = temp->next;
        cnt++;
    }
    temp->next = startNOde;
}

bool detectCycle(node* &head){
    node* fast = head;
    node* slow = head;

    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow)
            return true;
    }
    return false;
}

void removeCycle(node* &head){
    node* fast = head;
    node* slow = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main(){
    node* head=NULL;
    insertAtend(head,1);
    insertAtend(head,2);
    insertAtend(head,3);
    insertAtend(head,4);
    insertAtend(head,5);
    insertAtend(head,6);
    makeCycle(head,3);
    //display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;  
    display(head);
    return 0;
}