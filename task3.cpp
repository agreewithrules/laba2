#include <iostream>

int main()
{
    double x, y;
    
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;

    if(y >= -x && x * x + y * y <= 1) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }

    return 0;
}
