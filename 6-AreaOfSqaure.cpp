#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    double edge, area = 0.0;
    std::cout << "Enter the edge of the sqaure : ";
    std::cin >> edge;
    area = pow(edge, 2);
    std::cout << "The area of the Square = " << area << std::endl;
    return 0;
}
