#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    double A, P, r, t, CI;
    std::cout << "Enter the principal, rate and time : " << std::endl;
    std::cin >> P >> r >> t;
    A = P * pow((1 + (r / 100.0)), t);
    CI = A - P;
    std::cout << "Principal = " << P << std::endl
              << "Rate = " << r << std::endl
              << "Time = " << t << std::endl
              << "Amount = " << A << std::endl
              << "The Compound Interest = " << CI << std::endl ;
    return 0;
}
