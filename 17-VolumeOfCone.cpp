#include <iostream>
#include <math.h>
#define pi (22.0 / 7.0)

int main(int argc, char const *argv[])
{
    double r, h, volume;
    std::cout << "Enter the base radius and height :" << std::endl;
    std::cin >> r >> h;
    volume = (1 / 3.0) * pi * pow(r, 2) * h;
    std::cout << "The volume of the cone = " << volume << std::endl;
    return 0;
}
