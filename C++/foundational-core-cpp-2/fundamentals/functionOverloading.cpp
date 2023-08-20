#include <iostream>
#include <cmath>
using namespace std;

#define PI M_PI

void volume(double h, double r){
    double vol = (PI * pow(r, 3)) / 3;
    cout << "Volume of cylinder is: " << vol << endl;
}
float volume(double l){
    double vol = pow(l, 3);
    cout << "volume of cube with length " << l << " is: " << vol << endl;
    return vol;
}

int main() {
    float vol = volume(10);
    cout << endl;
    volume(5, 5);
    
    cout << vol;
    
    
    return 0;
}