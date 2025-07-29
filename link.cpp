#include<iostream>
using namespace std;


class noad{
    public:

     int data;
     noad *next;

    noad(int d){
        this->data = d;
        this->next=NULL;
    }


};

void insert(noad* &tail,int d){
    noad* temp=new noad(d);
    tail->next=temp;
    tail=temp;
}

void insertAthead(noad* &head,int d){
    noad* temp=new noad(d);
    temp->next=head;
    head=temp;
}

void print(noad* head){
    noad* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void del(int position, noad* &head,noad* &tail){
    
    if (position==1)
    {
        noad* temp;
        temp=head;
        head=head->next;
        delete temp;
    }
    else{
        noad* temp;
        noad* tempb;
        temp=head;
        int count=1;
        while(count<position){
            tempb=temp;
            temp=temp->next;
            count++;            
        }
        if(temp->next==NULL){
    
            tempb->next=temp->next;
            delete temp;
            tail=tempb;
            return;

        }

        tempb->next=temp->next;
        delete temp;
    }
    


}

int main()
{
    noad *n1=new noad(10);
    noad* head;
    head=n1;
    noad* tail;
    tail=n1;
    insert(tail,15);
    print(head);
    insert(tail,20);
    insert(tail,50);
    insert(tail,66);
    insertAthead(head,100);
    print(head);
    cout<<"tail is "<<tail->data<<endl;
    del(6,head,tail);
    print(head);
    cout<<"tail is "<<tail->data<<endl;
    del(5,head,tail);
    print(head);
    cout<<"tail is "<<tail->data<<endl;
    del(4,head,tail);
    print(head);
    cout<<"tail is "<<tail->data<<endl;

}