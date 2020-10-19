#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "The Size of the data types" << std::endl;
    std::cout << "The sizeOf(char) :           " << sizeof(char)        << "\t bytes" << std::endl;
    std::cout << "The sizeOf(short) :          " << sizeof(short)       << "\t bytes" << std::endl;
    std::cout << "The sizeOf(int) :            " << sizeof(int)         << "\t bytes" << std::endl;
    std::cout << "The sizeOf(long) :           " << sizeof(long)        << "\t bytes" << std::endl;
    std::cout << "The sizeOf(long long) :      " << sizeof(long long)   << "\t bytes" << std::endl;
    std::cout << "The sizeOf(float) :          " << sizeof(float)       << "\t bytes" << std::endl;
    std::cout << "The sizeOf(double) :         " << sizeof(double)      << "\t bytes" << std::endl;
    std::cout << "The sizeOf(long double) :    " << sizeof(long double) << "\t bytes" << std::endl;
    std::cout << "The sizeOf(bool) :           " << sizeof(bool)        << "\t bytes" << std::endl;
    return 0;
}
