// tower of hanoi

#include<iostream>
using namespace std;

void TOH(int n, char source, char helper, char des){
        if (n==1){
            cout<<"Disk move from "<<source<<" to "<<des<<endl;
            return;
        }
        TOH(n-1, source, des, helper);
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<des<<endl;

        TOH(n-1, helper, source, des);

}

int main()
{
    int n;
    cout<<"Enter the No of disk: ";
    cin>>n;
    cout<<endl;
    TOH(4, 'S', 'H', 'D');
    return 0;
}