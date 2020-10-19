#include <iostream>
#include <math.h>
#define pi (22.0 / 7.0)

int main(int argc, char const *argv[])
{
    double r1, r2, r3, volume;
    std::cout << "Enter the radii of ellipsoid :";
    std::cin >> r1 >> r2 >> r3;
    volume = (4.0 / 3.0) * pi * r1 * r2 * r3;
    std::cout << "The Volume of the Ellipsoid = " << volume << std::endl;
    return 0;
}
