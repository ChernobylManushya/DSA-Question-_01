//  appliying method of push_front, push_back, insert, pop_front, pop_front, search, deleteElement
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

class list{
    Node*head;
    Node*tail;
    public:
    list (){
        head=NULL;
        tail=NULL;
    }

    void push_front(int value){
        Node*newNode=new Node(value);
        if (head==NULL) head=tail=newNode;
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    void push_back(int value){
        Node*newNode=new Node(value);
        if (head==NULL) head=tail=newNode;
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void insert(int value, int pos){
        Node*newNode=new Node(value);
        Node*temp=head;

        for(int i=0; i<pos-1; i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void printLL(){
        Node*temp=head;
        if (head==NULL) return;
        else{
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
    }

    void pop_front(){
        Node*temp=head;
        if (head==NULL) return;
        else{
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }
    }

    void pop_back(){
        Node*temp=head;
        if(head==NULL) return;
        else{
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
    }

    int search(int value){
        Node*temp=head;
        int index=0;
        while(temp!=NULL){
            if (temp->data==value){
                return index;
            }
            temp=temp->next;
            index++;
            }
            return -1;
        }
    
    int getSize(){
        int i=0;
        Node*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        return i;
    }

    void deleteElement(int n){
        Node*temp=head;
        int size=getSize();
        for (int i=0; i<size-n; i++){
            temp=temp->next;
        }
        Node*toDel=temp->next;
        cout <<"Going to delete: "<<toDel->data<<endl;
        temp->next=temp->next->next;
        delete toDel;
    }
};

int main() {
    list ll;
    int response;
    int n;
    int values;
    int pos;
    cout<<"Press 1 for Insert the value in front."<<endl;
    cout<<"Press 2 for Insert the value in last."<<endl;
    cout<<"Press 3 for Insert the value in nth position."<<endl;
    cout<<"Press 4 for Delete the value in front."<<endl;
    cout<<"Press 5 for Delete the value in last."<<endl;
    cout<<"Press 6 for Search the value."<<endl;
    cout<<"Press 7 for Delete the value in nth position."<<endl;
    cout<<"Enter your response: ";
    cin>>response;
    switch(response){
        case 1: cout<<"How many value you want to insert in front of an array: ";
                cin>>n;
                for(int i=0; i<n; i++){
                    cout<<"Enter the values "<<i<<" :";
                    cin>>values;
                    ll.push_front(values);
                }
                ll.printLL();
                break;
        
        case 2: cout<<"How many value you want to insert in back of an array: ";
                cin>>n;
                for(int i=0; i<n; i++){
                    cout<<"Enter the values "<<i<<" :";
                    cin>>values;
                    ll.push_back(values);
                }
                ll.printLL();
                break;

        case 3: cout<<"Enter the Value and Position an element which you want to insert: ";
                cin>>values;
                cin>>pos;
                ll.insert(values, pos);
                ll.printLL();
                break;

        case 4: cout<<"How many value you want to delete in front of an array: ";
                cin>>n;
                for(int i=0; i<n; i++){
                    ll.pop_front();
                }
                ll.printLL();
                break;

        case 5: cout<<"How many value you want to delete in back of an array: ";
                cin>>n;
                for(int i=0; i<n; i++){
                    ll.pop_back();
                }
                ll.printLL();
                break;
        
        case 6: cout<<"Enter the Value you want to search: ";
                cin>>values;
                cout<<"Position on the value is: ";
                ll.search(values);

        case 7: cout<<"Enter the Value  which you want to delete: ";
                cin>>values;
                ll.deleteElement(values);
                cout<<"Element deleted successfully"<<endl;
                ll.printLL();
                break;
    }

    return 0;
}