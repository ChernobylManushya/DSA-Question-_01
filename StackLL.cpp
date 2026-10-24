// implementing stack using linked list


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

class stack{
    Node*head;
    Node*tail;
    public:
    stack(){
        head=NULL;
        tail=NULL;
    }

    void push_back(int value){
        Node*newNode=new Node(value);
        if (head==NULL) head=tail=newNode;
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_back(){
        Node*temp=head;
        if (head==NULL)return;
        else{
            while(temp->next!=tail){
                temp=temp->next;
            } 
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
    }

    void printStk(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};

int main() {
    // Your code goes here
    stack stk;
    stk.push_back(9);
    stk.push_back(4);
    stk.push_back(3);
    stk.push_back(8);
    stk.push_back(5);
    stk.printStk();
    stk.pop_back();
    cout<<endl;
    stk.printStk();
    return 0;
}