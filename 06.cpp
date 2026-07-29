// horizontal range

#include <iostream>
#include<cmath>
using namespace std;

void hRange(float s, float deg){
    float rad=deg*3.14/180;
    float h=(s*s*sin(2*rad))/10;
    cout<<"The horizontal range : "<<h<<endl;
}

int main() {
   
    hRange(29.3, 60);
    return 0;
}