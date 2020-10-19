#include <iostream>

int main(int argc, char const *argv[])
{
    double l, b, h, volume;
    std::cout << "Enter the length, breadth and height of the Cuboid :" << std::endl;
    std::cin >> l >> b >> h;
    volume = l * b * h;
    std::cout << "Volume of the Cuboid = " << volume << std::endl;
    return 0;
}
