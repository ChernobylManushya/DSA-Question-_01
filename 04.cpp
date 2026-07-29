// finding time of flight

#include <iostream>
#include <cmath>
using namespace std;

void timeofFlight(float speed, float deg){
    float rad=deg*(3.14/180);
    float t=(2*speed*sin(rad))/2;
    cout<<"Time of flight: "<<t<<" sec"<<endl;

}

int main() {
    timeofFlight(37.2, 30);
    
    return 0;
}