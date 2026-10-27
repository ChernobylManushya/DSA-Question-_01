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

class InsertionSort{
    Node*head, *tail;
    public:
    InsertionSort(){
        head=tail=NULL;
    }

    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    
    void printLL(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void insertionSort() {
        Node* sorted = NULL;
        Node* current = head;

        while (current != NULL) {
            Node* nextNode = current->next;

            if (sorted == NULL || sorted->data >= current->data) {
                current->next = sorted;
                sorted = current;
            }
            else {
                Node* temp = sorted;

                while (temp->next != NULL && temp->next->data < current->data) {
                    temp = temp->next;
                }

                current->next = temp->next;
                temp->next = current;
            }

            current = nextNode;
        }

        head = sorted;

        tail = head;
        while (tail != NULL && tail->next != NULL) {
            tail = tail->next;
        }
    }
};

int main() {
    // Your code goes here
    InsertionSort ll;

    ll.insert(4);
    ll.insert(2);
    ll.insert(5);
    ll.insert(1);
    ll.insert(3);

    cout << "Before sorting: ";
    ll.printLL();

    ll.insertionSort();

    cout << "\nAfter sorting: ";
    ll.printLL();

    return 0;
}