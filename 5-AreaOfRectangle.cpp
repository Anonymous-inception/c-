#include <iostream>
int main(int argc, char const *argv[])
{
	double l, b, area;
	std::cout << "Enter the length and breadth of the rectangle :" << std::endl;
	std::cin >> l >> b;
	area = l * b;
	std::cout << "The area of the rectangle = " << area << std::endl;
	return 0;
}
