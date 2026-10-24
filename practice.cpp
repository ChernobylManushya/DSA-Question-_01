#include <iostream>
using namespace std;

void createArr(int arr[], int n ){
    cout<<"Enter the elements in and array: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void printArr(int arr[], int n){
    cout<<"The array is :";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    // Your code goes here
    int n=5;
    int arr[n]={4,3,7,9,4};
    printArr(arr, n);

    int choice;
    int newElement;
    int pos;
    cout<<"-----List of operation you can perform on unsorted array-----"<<endl;
    cout<<"1. Inserting an element in the begining"<<endl;
    cout<<"2. Inserting an element in the middle"<<endl;
    cout<<"3. Inserting an element in the last"<<endl;
    cout<<"4. Delete an element from the array"<<endl;
    cout<<"Enter your response: ";
    cin>>choice;
    switch(choice){
        case 1: cout<<"Enter the new element: ";
                cin>>newElement;
                for (int i=n; i>0; i--){
                    arr[i]=arr[i-1];
                }
                arr[0]=newElement;
                n++;
                printArr(arr, n);
                break;
    
        case 2: cout<<"Enter the new element: ";
                cin>>newElement;
                cout<<"Enter the position: ";
                cin>>pos;
                for (int i=n; i>n-pos; i--){
                    arr[i]=arr[n-1];
                }
                arr[pos]=newElement;
                n++;
                printArr(arr, n);
                break;
        
        case 3: cout<<"Enter the new element: ";
                cin>>newElement;
                arr[n]=newElement;
                n++;
                printArr(arr, n);
                break;

    }
    return 0;
}