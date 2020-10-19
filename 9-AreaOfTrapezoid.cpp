#include <iostream>

int main(int argc, char const *argv[])
{
    double a,b,h, area;
    std::cout <<"Enter the two parallel sides and height : " << std::endl;;
    std::cin >> a >> b >> h;
    area = 0.5 * (a+b) * h;
    std::cout << "The area of the trapezoid = " << area << std::endl; 
    return 0;
}
