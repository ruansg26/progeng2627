#include <iostream>

int main(){
    int n=1, sum=0;
    while (n != 0){
        std::cout << "enter a number: "<< std::endl;
        std::cin >> n ;
        sum = n + sum;
        std::cout << "the sum is " << sum << std::endl;

    }
}