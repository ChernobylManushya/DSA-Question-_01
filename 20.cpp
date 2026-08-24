// implementing Queue using doubly linked list

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

class DoubleLLQ{
    Node*head;
    Node*tail;
    public:
    DoubleLLQ(){
        head=NULL;
        tail=NULL;
    }

    void enqueue(int value){
        Node*newNode=new Node(value);

        if (head==NULL) head=tail=newNode;
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void dequeue(){
        if (head==NULL){
            cout<<"DoublyLLQ is empty"<<endl;
            return;
        }
        Node*temp=tail;
        if (head==tail) head=tail=NULL;
        else{
            tail=tail->prev;
            tail->next=NULL;
        }
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
    DoubleLLQ dllq;
    dllq.enqueue(6);
    dllq.enqueue(7);
    dllq.enqueue(5);
    dllq.enqueue(1);
    dllq.enqueue(2);
    dllq.printLL();

    dllq.dequeue();
    dllq.dequeue();
    dllq.printLL();
    return 0;
}