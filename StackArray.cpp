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

bool push_back(int arr[], int &n, int capacity, int value){
    if (n == capacity){
        return false;
    }
    arr[n++] = value;
    return true;
}

bool pop_back(int arr[], int &n){
    if (n == 0){
        return false;
    }
    arr[--n] = 0;
    return true;
}

int main() {
    const int capacity = 10;
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
                if (!push_back(arr, size, capacity, value)){
                    cout<<"Stack is full."<<endl;
                }
                printArr(arr, size);
                break;
        
        case 2: if (!pop_back(arr, size)){
                    cout<<"Stack is empty."<<endl;
                }
                printArr(arr, size); 
                break;

    }
    return 0;
}