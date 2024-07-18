#include <iostream>

int main()
{
    int number {};

    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "Double is: " << number * 2 << '\n';
    std::cout << "Triple is: " << number * 3 << '\n';
}
