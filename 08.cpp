#include <iostream>
using namespace std;

void shiftZero(int arr[], int n){
    int nonZeroCount=0;
    for (int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[nonZeroCount++]=arr[i];
        }
    }
    for(int i=nonZeroCount; i<n; i++){
        arr[i]=0;
    }
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array";
    for (int i=0; i<n; i++){
        cout<<"Enter the element at "<<i<<" index: ";
        cin>>arr[i];
    }
    
    cout<<"The original array will be : ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    shiftZero(arr, n);
    
    cout<<"The array will be : ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}