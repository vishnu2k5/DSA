#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

};

void print(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
    
}

void insert(int position,node* &head,int data,node* &tail){
    
    if (position==1)
    {
        node* temp=head;
        node* h2=new node(data);
        h2->next=temp;
        temp->prev=h2;
        head=h2;

    }
    else{
        node* temp=head;
        int count=1;
        while(count<position){
            
            temp=temp->next;
            count++;
            
        }
        node* i=new node(data);
        if (temp->next == NULL && temp->prev != NULL) {
            temp->next = i;
            i->prev = temp;
            i->next=NULL;
            tail=i;
            return;
        }
        node* tempnext=temp->next;
        temp->next=i;
        i->next=tempnext;
        i->prev=temp;
        tempnext->prev=i;
    }
    
}


void del(int position, node* &head,node* &tail){
    if(position==1){
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return ;
    }
    node* temp=head;
    int count=1;
    while(count<position){
        temp=temp->next;
        count++;   
    }
    if (temp == NULL) return; 
    if(temp->next==NULL){
        tail=temp->prev;
        temp->next=NULL;
        delete temp;
        return;
    }
    node* pre=temp->prev;
    node* nex=temp->next;
    pre->next=temp->next;
    nex->prev=temp->prev;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;

}

int main(){

    node* h1=new node(1);
    node* head=h1;
    node* tail=h1;
    print(head);
    insert(1,head,2,tail);
    insert(1,head,22,tail);
    insert(1,head,3,tail);
    insert(1,head,24,tail);
    print(head);
    insert(3,head,10,tail);
    print(head);
    insert(6,head,11,tail);
    print(head);
    del(1,head,tail);
    print(head);
    del(4,head,tail);
    print(head);

    
}