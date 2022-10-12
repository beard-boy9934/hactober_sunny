#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};
Node* reverseDLL(Node * head)
{
    Node* curr=head;
    Node* temp=head;
    int counter=0;
    while(temp->next!=NULL){
        temp=temp->next;
        counter++;
    }
    int i=0;
    int j=counter;
    while(i!=j && i<j){
        int cop=curr->data;
        curr->data=temp->data;
        temp->data=cop;
        curr=curr->next;
        temp=temp->prev;
        i++;
        j--;
    }
    return head;
}
int main()
{
    int n;
    cin>>n;
    Node *head=NULL,*tail=NULL;
    int x;
    cin>>x;
    head=new Node(x);
    tail=head;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        Node* temp=new Node(x);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    cout<<"Display before reverse"<<"\n";
    Node* temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    head=reverseDLL(head);
    cout<<"\n";
    cout<<"Display after reverse"<<"\n";
    Node* temp2=head;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
}
