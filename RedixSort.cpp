// redix sort

#include<iostream>
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

class RedixSort{
    Node*head;
    Node*tail;
    public:
    RedixSort(){
        head=NULL;
        tail=NULL;
    }

    void push(int value){
        Node*newNode=new Node(value);
        if (head==NULL)head= tail= newNode;
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    int getMax(){
        int max=head->data;
        Node*temp=head;
        while(temp!=NULL){
            if (temp->data>max){
                max=temp->data;
                temp=temp->next;
            }
            return max;
        }
    }

    void redixSort(){
        int max=getMax();
        for (int exp=1; max/exp>0; exp*=10){
             
            Node* bucketHead[10]={NULL};
            Node* bucketTail[10]={NULL};

            Node*temp=head;
            while(temp!=NULL){
                Node*nextNode=temp->next;
                int digit=(temp->data/exp)%10;
                temp->next=NULL;

                if (bucketHead[digit]==NULL){
                    bucketHead[digit]=temp;
                    bucketTail[digit]=temp;
                }
                else{
                    bucketTail[digit]->next=temp;
                    bucketTail[digit]=temp;
                }
                temp=nextNode;
            }

            head=NULL;
            Node*tail=NULL;

            for(int i=0; i<10; i++){
                if (bucketHead[i]!=NULL){
                    if(head==NULL){
                        head=bucketHead[i];
                        tail=bucketTail[i];
                    }
                    else{
                        tail->next=bucketHead[i];
                        tail=bucketTail[i];
                    }
                }
            }
        }
    }

    void printLL(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    RedixSort rs;
    rs.push(5);
    rs.push(9);
    rs.push(7);
    rs.push(6);
    rs.push(1);
    rs.push(2);
    rs.push(4);
    rs.printLL();

    rs.redixSort();
    rs.printLL();
    
    return 0;
}