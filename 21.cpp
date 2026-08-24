// implementing stack using doubly linked list

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
class DoubleLLS{
    Node*head;
    Node*tail;
    public:
    DoubleLLS(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int value){
        Node*newNode=new Node(value);

        if(head==NULL) head=tail=newNode;
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void pop_front(){
        Node*temp=head;
        if (head==NULL) return;
        else{
            head=head->next;
            if (head!=NULL) head->prev=NULL;
            temp->next=NULL;
            delete temp;

        }
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
    DoubleLLS dlls;
    dlls.push_front(7);
    dlls.push_front(1);
    dlls.push_front(3);
    dlls.push_front(5);
    dlls.push_front(6);
    dlls.printLL();

    dlls.pop_front();
    dlls.printLL();
    return 0;
}