#include "iostream"
#include "math.h"
#include "iomanip"


//Calculate Area of Circle
float AreaOfCircle(float radius){
    float RES = 0;
    RES = M_PI * pow<float, float>(radius, 2);
    std::cout << "Area of the Circle is: " << RES;
    return RES;
}

int main(){

    float radius = 0;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Enter Radius of the Circle: ";

    std::cin >> radius;

    AreaOfCircle(radius);

}