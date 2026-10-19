#include <iostream>

int main(){
    int n, factorial=1;
    std::cin >> n;

    for(int i=n; i>0; i--){
        factorial = factorial*i;
    }
    std::cout << factorial<< std::endl;
}