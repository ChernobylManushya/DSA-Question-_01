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

class SelectionSort{
    Node*head, *tail;
    public:
    SelectionSort(){
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

    void selectionSort() {
        Node* current = head;

        while (current != NULL) {
            Node* minNode = current;
            Node* temp = current->next;

            while (temp != NULL) {
                if (temp->data < minNode->data) {
                    minNode = temp;
                }
                temp = temp->next;
            }

            // Swap data of current and minimum node
            if (minNode != current) {
                int value = current->data;
                current->data = minNode->data;
                minNode->data = value;
            }

            current = current->next;
        }

    }

};

int main() {
    // Your code goes here
    SelectionSort ll;

    ll.insert(4);
    ll.insert(2);
    ll.insert(5);
    ll.insert(1);
    ll.insert(3);

    cout << "Before sorting: ";
    ll.printLL();

    ll.selectionSort();

    cout << "\nAfter sorting: ";
    ll.printLL();

    return 0;
}
