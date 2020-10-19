#include <iostream>
#include <climits>

int main(int argc, char const *argv[])
{
    int n1 = INT_MAX;
    int n2 = INT_MIN;
    std::cout << "Maximum value of Integer = " << n1 << std::endl;
    std::cout << "Overflow ( " << n1 << " + 1 ) : " << n1 + 1 << std::endl;
    std::cout << "Overflow ( " << n1 << " + 2 ) : " << n1 + 2 << std::endl;
   
    std::cout << "Minimum value of Integer = " << n2 << std::endl;
    std::cout << "Underflow ( " << n2 << " - 1 ) : " << n2 - 1 << std::endl;
    std::cout << "Underflow ( " << n2 << " - 2 ) : " << n2 - 2 << std::endl;

    std::cout << "n1 * n1 : " << n1 * n1 << std::endl;
    std::cout << "n2 * n2 : " << n2 * n2 << std::endl;
    std::cout << "n1 * n2 : " << n1 * n2 << std::endl;
    return 0;
}
