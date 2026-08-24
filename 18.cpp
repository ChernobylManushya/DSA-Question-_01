// circular queue

#include<iostream>
using namespace std;

class circularQueue{
    int *arr;
    int cap;
    int currSize;
    int f;
    int r;
    public:
    circularQueue(int size){
        cap=size;
        currSize=0;
        arr=new int[cap];
        f=0; 
        r=-1;
    }

    void push(int value){
        if (currSize==cap){
            cout<<"Queue is full"<<endl;
            return;
        }
        r=(r+1)%cap;
        arr[r]=value;
        currSize++;
    }

    void pop(){
        if (currSize==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f=(f+1)%cap;
        currSize--;
    }

    bool empty(){
        return currSize==0;
    }

    void printLL(){
        cout<<"The circular Queue is: ";
        for(int i=0; i<currSize; i++){
            cout<<arr[(f+i)%cap]<<" -> ";
        }
    }
};

int main()
{
    circularQueue cq(5);
    cq.push(8);
    cq.push(5);
    cq.push(2);
    cq.push(9);
    cq.push(1);
    

    cq.printLL();
    cq.pop();
    cq.pop();
    cout<<endl;
    cq.printLL();
    return 0;
}