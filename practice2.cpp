// #include <iostream>
// using namespace std;

// void createArr(int arr[], int n){
//     cout<<"Enter the elements: "<<endl;
//     for (int i=0; i<n; i++){
//         cout<<"Enter the element at index "<<i<<" : ";
//         cin>>arr[i];
//     }
// }

// void printArr(int arr[], int n){
//     cout<<"The array is : "<<endl;
//     for (int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout << endl;
// }



// int main() {
//     int n=5;
//     int arr[5];
//     int res;
//     int value;
//     cout<<"Press 1 for creating array."<<endl;
//     cout<<"Press 2 for inserting value in front."<<endl;
//     cout<<"Press 3 for inserting value at last"<<endl;
//     cout<<"Press 4 for inserting value after any value."<<endl;
//     cout<<"Press 5 for inserting value before any value."<<endl;
//     cout<<"Press 6 for inserting value at any specific position."<<endl;
//     cout<<"Press 7 for deleting value at front."<<endl;
//     cout<<"Press 8 for deleting value at back."<<endl;  
//     cout<<"Enter your response: ";
//     cin>>res;
//     switch(res){
//         case 1: cout<<"Enter the values : ";
//                 createArr(arr, n);
//                 printArr(arr, n);
//                 break;
        
//         case 2: cout<<"Enter the values : "<<endl;
//                 createArr(arr, n);
//                 printArr(arr, n);
//                 cout<<"Enter the value you want to insert: ";
//                 cin>>value;
//                 n++;
//                 for(int i=n-1; i>0; i--){
//                     arr[i]=arr[i-1];
//                 }
//                 arr[0]=value;
//                 printArr(arr, n);
//                 break;

//         case 3: cout<<"Enter the values : ";
//                 createArr(arr, n);
//                 printArr(arr, n);
//                 cout<<"Enter the value you want to insert: ";
//                 cin>>value;
//                 n++;
//                 arr[n-1]=value;
//                 printArr(arr, n);
//                 break;


//         case 4:cout<<"Enter the values : ";
//                 createArr(arr, n);
//                 printArr(arr, n);
//                 cout<<"Enter the value you want to insert: ";
//                 cout<<"Enter the value after which you want to insert: ";
//                 int after;
//                 cin>>value;
//                 cin>>after;
//                 int index=-1;
//                 for (int i=0; i<n; i++){
//                     if(arr[i]==after){
//                         index=i;
//                         break;
//                     }
//                 }

//                 if (index==-1){
//                     cout<<"Value not found";
//                     break;
//                 }

//                 for(int i=n; i>index; i--){
//                     arr[i]=arr[i-1];
//                 }
//                 arr[index]=value;
//                 n++;
//                 printArr(arr, n);
//                 break;
    
//         case 5:cout<<"Enter the values : ";
//                 createArr(arr, n);
//                 printArr(arr, n);
//                 cout<<"Enter the value you want to insert: ";
//                 cout<<"Enter the value before which you want to insert: ";
//                 int before;
//                 cin>>value;
//                 cin>>before;
//                 int index=-1;
//                 for (int i=0; i<n; i++){
//                     if (arr[i]==before){
//                         index=i;
//                         break;
//                     }
//                 }
//                 if (index==-1){
//                     cout<<"Value not found";
//                     break;
//                 }

//                 for(int i=n; i>index; i--){
//                     arr[i]=[i-1];
//                 }
//                 arr[index]=value;
//                 n++;
//                 printArr(arr, n);
//                 break;

//         case 6: cout<<"Enter the values : ";
//                 createArr(arr, n);
//                 printArr(arr, n);
//                 cout<<"Enter the value you want to insert: ";
//                 cin>>value;
//                 int pos;
//                 cout<<"Enter the position where you want to insert: ";
//                 cin>>pos;
//                 if (pos < 0 || pos > n) {
//                     cout << "Invalid position.";
//                     break;
//                 }
//                 for (int i=n; i>pos; i--){
//                     arr[i]=arr[i-1];
//                 }
//                 arr[pos]=value;
//                 printArr(arr, n);
//                 n++;
//                 break;

//         case 7: cout<<"Enter the values : ";
//                 createArr(arr, n);
//                 printArr(arr, n);
//                 cout<<"Enter the value you want to insert: ";
//                 cin>>value;
//         default:
//             cout << "Invalid choice." << endl;
//             break;
//     }   
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int value){
//         data=value;
//         next=NULL;
//     }
// };

// class BucketSort{
//     public:
//     void sortedInsert(Node*& head, int value){
//         Node*newNode=new Node(value);

//         if (head==NULL || value<head->data){
//             newNode->next=head;
//             head=newNode;
//             return;
//         }

//         Node*temp=head;
//         while(temp->next!=NULL && temp->next->data<value){
//             temp=temp->next;
//         }
//         newNode->next=temp->next;
//         temp->next=newNode;
//     }

//     void bucketSort(int arr[], int n){
//         Node*bucket[10]={NULL};
//         for(int i=0; i<n; i++){
//             int index=arr[i]/10;

//             sortedInsert(bucket[index], arr[i]);
//         }

//         int k=0;
//         for(int i=0; i<10; i++){
//             Node*temp=bucket[i];
//             while(temp!=NULL){
//                 arr[k++]=temp->data;
//                 temp=temp->next;
//             }
//         }
//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }
//     }


// };

// int main()
// {
//     BucketSort bs;
//     int arr[7]={43, 5,2,87,93,11,32};
//     int n=7;
//     bs.bucketSort(arr, n);
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int value){
//         data=value;
//         next=NULL;
//     }
// };

// class BinSort{
//     public:
//     void sortedInsert(Node*&head, Node*&tail, int value){
//         Node*newNode=new Node(value);
//         if (head==NULL){
//             head=tail=newNode;
//             return;
//         }

//         tail->next=newNode;
//         tail=newNode;
//     }

//     void binSort(int arr[], int n){
//         Node*bin[10]={NULL};
//         Node*tail[10]={NULL};

//         for(int i=0; i<n; i++){
//             int index=arr[i];

//             sortedInsert(bin[index], tail[index], arr[i]);
//         }

//         int k=0;

//         for(int i=0; i<10; i++){
//             Node*temp=bin[i];

//             while(temp!=NULL){
//                 arr[k++]=temp->data;
//                 temp=temp->next;
//             }
//         }

//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };

// int main()
// {
//     BinSort bs;
//     int arr[] = {4, 2, 7, 1, 5, 2, 8, 3};
//     int n = 8;

//     bs.binSort(arr, n);
    
//     return 0;
// }

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class MergeSort{
    Node*head;
    Node*tail;
    public:
    MergeSort(){
        head=tail=NULL;
    }

    void 
}

int main()
{
    

    return 0;
}