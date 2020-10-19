#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
	double a, b, c, s, area;
	std::cout << "Enter the three sides of the triangle :" << std::endl;
	std::cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a)
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		std::cout << "The area of the triangle = " << area << std::endl;
	}
	else
	{
		std::cout << "Invalid sides of triangle !! ";
	}
	return 0;
}
