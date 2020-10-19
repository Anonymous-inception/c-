#include <iostream>
#include <math.h>
#define pi (22.0 / 7.0)
int main(int argc, char const *argv[])
{
    double r, area;
    std::cout << "Enter the radius of the circle : ";
    std::cin >> r;
    area = pi * pow(r, 2);
    std::cout << "The area of the circle = " << area << std::endl;
    return 0;
}
