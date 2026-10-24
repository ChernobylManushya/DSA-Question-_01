// Doubly linked list with push_front , push_back, pop_front, pop_back, insert

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};

class DoublyLL{
    Node*head;
    Node*tail;
    public:
    DoublyLL(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int value){
        Node*newNode=new Node(value);
        if(head==NULL)head=tail=newNode;
        else{
            newNode->next=head;
            head->prev=NULL;
            head=newNode;
        }
    }

    void push_back(int value){
        Node*newNode=new Node(value);

        if (head==NULL)head=tail=newNode;
        else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }

    void insert(int value, int pos){
        Node*newNode=new Node(value);
        Node*temp=head;
        if (head==NULL) head=tail=newNode;
        else{
            for (int i=0; i<pos-1; i++){
                temp=temp->next;
            }
            newNode->next=temp->next;
            newNode->prev=temp;
            temp->next=newNode;
        }
    }

    void pop_front(){
        Node*temp=head;
        if (head==NULL) return;
        else{
            head=head->next;
            if (head!=NULL)head->prev=NULL;
            temp->next=NULL;
            delete temp;
        }
    }

    void pop_back(){
        if (head==NULL) {
            cout<<"DoubleLL is empty"<<endl;
            return;
        }
    
        Node*temp=tail;
    
        tail=tail->prev;
        if(tail!=NULL)tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        
    }

    void printLL(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" <=> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    DoublyLL dll;
    dll.push_front(9);
    dll.push_front(7);
    dll.push_front(4);
    dll.push_front(2);
    dll.push_front(4);
    dll.printLL();

    dll.push_back(1);
    dll.push_back(5);
    dll.printLL();

    dll.insert(10,4);
    dll.printLL();

    dll.pop_front();
    dll.pop_front();
    dll.printLL();
    
    dll.pop_back();
    dll.pop_back();
    dll.printLL();

    return 0;
}