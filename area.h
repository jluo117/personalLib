#include <cmath>
#include <iostream>
using namespace std;

void rectangle (double width, double height){
    cout << "Area is " << width*height << endl;
    cout << "Perimeter is " <<2* (width+height) <<endl;
    return;
}

void triangle (double width, double height){
    double area;
    area = width*height;
    cout << "Area of this triangle is " << area/2 <<endl;
    return;
}

