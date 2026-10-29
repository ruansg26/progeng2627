#include <iostream>
#include <cmath>


int main() {
    int x, n, sum=0;
    std::cout << "Enter the base: ";
    std::cin >> x;
    std::cout << "Enter the exponent: ";
    std::cin >> n;

    for(int i=1; i<n; i++){
        sum = std::pow(x,i) + sum;
    }

    std::cout << "sum of powers is: " << sum << std::endl;
}