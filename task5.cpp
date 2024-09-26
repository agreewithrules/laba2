#include <iostream>

int factorial(int num) {
    int fact = 1;
    for(; num; num--)
        fact *= num;
    
    return fact;
}

int main()
{
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    long long int sum = 0, sum_p;
    for(int i = 0; i <= n; i++){
        sum_p = 1;
        for(int j = 0; j <= i; j++){
            sum_p *= factorial(i) / factorial(j);
        }
        sum += sum_p;
    }

    std::cout << sum;

    return 0;
}