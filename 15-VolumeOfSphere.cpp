#include <iostream>
#include <math.h>
#define pi (22.0 / 7.0)
int main(int argc, char const *argv[])
{
    double radius, volume;
    std::cout << "Enter the radius of the sphere : ";
    std::cin >> radius;
    volume = (4.0 / 3.0) * pi * pow(radius, 3);
    std::cout << "The volume of the sphere = " << volume << std::endl;
    return 0;
}