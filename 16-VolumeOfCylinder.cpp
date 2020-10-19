#include <iostream>
#include <math.h>
#define pi (22.0 / 7.0)

int main(int argc, char const *argv[])
{
    double h, r, volume;
    std::cout << "Enter the height and base radius of the cylinder: ";
    std::cin >> h >> r;
    volume = pi * pow(r, 2) * h;
    std::cout << "The volume of the cylinder = " << volume << std::endl;
    return 0;
}
