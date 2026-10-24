// merge sorting

#include <iostream>
using namespace std;

void createArr(int arr[], int n){
    cout<<"Enter the element for creating an array: "<<endl;
    for (int i=0; i<n; i++){
        cout<<"Enter the element at position "<<i<<" : ";
        cin>>arr[i];
    }
}

void printArr(int arr[], int n){
    cout<<"The Array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int left, int right){
    int mid=(left+right)/2;
    int merged[10];
    int first=left;
    int second=mid+1;
    int k=0;
    while (first<=mid && second<=right){
        if (arr[first]<=arr[second]){
            merged[k++]=arr[first++];
        }
        else{
            merged[k++]=arr[second++];
        }
    }

    while (first<=mid){
        merged[k++]=arr[first++];
    }
    while (second<=right){
        merged[k++]=arr[second++];
    }
    k=0;
    for (int i=left; i<=right; i++){
        arr[i]=merged[k++];
    }
}


void mergeSort(int arr[], int p, int q){
    if (p>=q) return;
    int mid=(p+q)/2;
    mergeSort(arr, p, mid);
    mergeSort(arr, mid+1, q);
    merge(arr, p, q);
}

int main() {
    // Your code goes here
    int arr[10];
    createArr(arr, 10);
    mergeSort(arr, 0, 9);
    printArr(arr, 10);
    return 0;
}