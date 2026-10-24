// maximum height attain by projectile

#include <iostream>
#include <cmath>
using namespace std;

void Hmax(float s, float deg){
    float rad=deg*3.14/180;
    float h=(s*s*sin(rad)*sin(rad))/20;
    cout<<"The max height : "<<h<<endl;
}

int main() {
    Hmax(36.9, 45);
    return 0;
}
