#include <iostream>

int main(int argc, char const *argv[])
{
    double base, height, area;
    std::cout << "Enter the base and height of the parallelogram :" << std::endl;
    std::cin >> base >> height ;
    area = base * height;
    std::cout << "The area of the parallelogram = " << area << std::endl;
    return 0;
}