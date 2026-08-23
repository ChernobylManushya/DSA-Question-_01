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

void push_back(int arr[], int &n, int value){
    arr[n]=value;
    n++;
}

void pop_back(int arr[], int &n){
    arr[n]=0;
    n--;
}

int main() {
    // Your code goes here
    int size=5;
    int arr[size];
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
                push_back(arr, size, value);
                printArr(arr, size);
                break;
        
        case 2: pop_back(arr, size);
                printArr(arr, size); 
                break;

    }
    return 0;
}