// implementing queue cusing linked list
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
class Que{
    Node*head;
    Node*tail;
    public:
    Que(){
        head=NULL;
        tail=NULL;
    }

    void push_back(int value){
        Node*newNode=new Node(value);

        if(head==NULL) head=tail=newNode;
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        Node*temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    void printQue(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main() {
    // Your code goes here
    Que q;
    q.push_back(4);
    q.push_back(2);
    q.push_back(5);
    q.push_back(6);
    q.push_back(7);
    q.printQue();
    q.pop_front();
    cout<<endl;
    q.printQue();
    return 0;
}