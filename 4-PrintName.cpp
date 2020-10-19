#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string name = "";
	std::cout << "Enter your name : ";

	// For single word
	// std::cin >> name;

	// For Full-name
	getline(std::cin, name);
	std::cout << "Welcome " << name << " !!!" <<std::endl;
	return 0;
}
