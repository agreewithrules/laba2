#include <iostream>
#include <math.h>

#define RES_1(X, Y) (pow(X, 3) + pow(Y, 3)) / 2
#define RES_2(X, Y) sqrt(fabs(X) * fabs(Y))

int main()
{
    double x, y;
    
    std::cin >> x;
    std::cin >> y;

    std::cout << RES_1(x, y) << std::endl;
    std::cout << RES_2(x, y) << std::endl;

    return 0;
}
