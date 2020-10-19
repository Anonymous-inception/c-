#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    double P, R, T, SI;
    std::cout << "Enter the principal, rate and time :" << std::endl;
    std::cin >> P >> R >> T;
    SI = (P * R * T) / 100;
    std::cout << "Principal = " << P << std::endl
              << "Rate = " << R << std::endl
              << "Time = " << T << std::endl
              << "Simple Interest = " << std::endl;
    return 0;
}
