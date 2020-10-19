#include <iostream>
#include <math.h>
#define pi (22.0 / 7.0)

int main(int argc, char const *argv[])
{
    double r, volume;
    std::cout << "Enter the radius of the Hemisphere : " ;
    std::cin >> r;
    volume = (2/3.0) * pi * pow(r, 3);
    std::cout << "The volume of the hemisphere = " << volume << std::endl ;
    return 0;
}
