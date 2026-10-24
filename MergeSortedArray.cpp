// merge the array with the help of sorted array

#include<iostream>
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

void merge(int arr1[], int arr2[], int l1, int l2, int n){
    int arr3[n*2];
    int k=0;
    while(l1<n && l2<n){
        if (arr1[l1]<arr2[l2]){
            arr3[k++]=arr1[l1++];
        }
        else{
            arr3[k++]=arr2[l2++];
        }
    }
    if (l1==n)
    {
        for (int i=l2; i<n*2; i++){
            arr3[k]=arr2[i];
            k++;
        }
    }
    else{
        for (int i=l1; i<n*2; i++){
            arr3[k]=arr1[i];
            k++;
        }
    }
  printArr(arr3, n*2);
}




int main()
{
    int arr1[5];
    int arr2[5];
    cout<<"Creating the 1st array: "<<endl;
    createArr(arr1, 5);
    cout<<"Creating the 2nd array: "<<endl;
    createArr(arr2, 5);
    printArr(arr1, 5);
    printArr(arr2, 5);
    merge(arr1, arr2, 0, 0, 5);
    return 0;
}