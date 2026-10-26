// implementing stack using array

#include <iostream>
using namespace std;

void createArr(int arr[], int n){
    cout<<"Enter the elements in array: "<<endl;
    for (int i=0; i<n; i++){
        cout<<"Element at position "<<i<<" :";
        cin>>arr[i];
    }
}

void printArr(int arr[], int n){
    cout<<"The array is : "<<" ";
    for (int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
}

void push_back(int arr[], int &n, int capacity, int value){
    if (n == capacity){
        cout<<"stack is full"<<endl;
        return;
    }
    arr[n++] = value;
    return;
}

void pop_back(int arr[], int &n){
    if (n == 0){
        cout<<"Stack is empty"<<endl;
        return ;
    }
    arr[--n] = 0;
    return;
}

int main() {
    int capacity = 10;
    int size=5;
    int arr[capacity];
    createArr(arr, size);
    printArr(arr, size);
    cout<<endl;
    int i;
    int value;
    cout<<"Press 1 for insert element in back: "<<endl;
    cout<<"Press 2 for remove element in back: "<<endl;
    cout<<"Enter your response: ";
    cin>>i;
    switch(i){
        case 1: cout<<"Enter the value you want to insert: ";
                cin>>value;
                push_back(arr, size, capacity, value);
                printArr(arr, size);
                break;
        
        case 2: pop_back(arr, size);
                printArr(arr, size); 
                break;

    }
    return 0;
}