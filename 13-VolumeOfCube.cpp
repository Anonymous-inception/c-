#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    double edge, volume;
    std::cout << "Enter the edge length of the cube : ";
    std::cin >> edge;
    volume = pow(edge, 3);
    std::cout << "The volume of the cube = " << volume << std::endl;
    return 0;
}
