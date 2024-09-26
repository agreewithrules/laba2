#include <iostream>
#include <math.h>

#define RES(X, Y) (fabs(X) - fabs(Y)) / (1 + fabs(X * Y))

int main()
{
    double x, y;

    std::cin >> x;
    std::cin >> y;

    std::cout << RES(x, y);

    return 0;
}