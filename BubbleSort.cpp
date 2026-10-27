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

class BubbleSort{
    Node*head, *tail;
    public:
    BubbleSort(){
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

    void bubbleSort() {
        for (Node* current = head; current != NULL; current = current->next) {
            bool swapped = false;
            Node* temp = head;

            while (temp != NULL && temp->next != NULL) {
                if (temp->data > temp->next->data) {
                    int value = temp->data;
                    temp->data = temp->next->data;
                    temp->next->data = value;
                    swapped = true;
                }
                temp = temp->next;
            }

            if (!swapped) {
                break;
            }
        }
    }

};

int main() {
    // Your code goes here
    BubbleSort ll;

    ll.insert(4);
    ll.insert(2);
    ll.insert(5);
    ll.insert(1);
    ll.insert(3);

    cout << "Before sorting: ";
    ll.printLL();

    ll.bubbleSort();

    cout << "\nAfter sorting: ";
    ll.printLL();

    return 0;
}
