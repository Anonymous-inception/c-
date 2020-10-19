#include <iostream>
#define pi (22.0 / 7.0)

int main(int argc, char const *argv[])
{
    double a, b, area;
    std::cout << "Enter the length of major and minor axis :" << std::endl;
    std::cin >> a >> b;
    area = pi * a * b;
    std::cout << "The area of the ecplise = " << area << std::endl;
    return 0;
}
