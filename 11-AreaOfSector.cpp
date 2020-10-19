#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    double r, theta, area;
    std::cout << "Enter the radius and angle in radian :" << std::endl;
    std::cin >> r >> theta;
    area = 0.5 * pow(r, 2) * theta;
    std::cout << "The area of the sector = " << area << std::endl;
    return 0;
}
