#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    double b, h, volume;
    std::cout << "Enter the base breadth and height: " << std::endl;
    std::cin >> b >> h;
    volume = (1 / 3.0) * b * h;
    std::cout << "The volume of the pyramid = " << volume;
    return 0;
}
