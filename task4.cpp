#include <iostream>
#include <stdio.h>

int main()
{   
    int n;

    std::cout << "Enter the length of the array: ";
    std::cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int sum_pos = 0, sum_neg = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] >= 0) {
            sum_pos += arr[i];
        } else {
            sum_neg += arr[i];
        }

    printf("sum_pos = %d\nsum_neg = %d\n", sum_pos, sum_neg);

    return 0;
}