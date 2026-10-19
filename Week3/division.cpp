#include <iostream>

int main(){
    int a, b, quo=0, rem;
    std::cout << "enter first number: "<< std::endl;
    std::cin >> a;
    std::cout << "enter second number: "<< std::endl;
    std::cin >> b;

    while ((a-b) >=0){
        a = a-b;
        quo = quo +1;
    }

    std::cout << "the quotient is " << quo << std::endl;
    std::cout << "the remainder is " << a << std::endl;
}