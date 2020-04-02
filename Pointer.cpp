#include <iostream>

int main()
{
    int x = 12;

    int *px = &x;

    std::cout << "How the console shows a variable: " << x << std::endl;
    std::cout << "How the console shows a pointer: " << px << ", but the value of the pointer: " << *px << std::endl;

    return 0;
}
