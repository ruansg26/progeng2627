#include <iostream>

int spf(int f){
    for(int i = 2; i < f; i++ ){
        if(f%i == 0){
            return i;
        }
    }
    return f;
}

int main(){
    int n;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> n;
    if(spf(n) == n){
        std::cout<< n << " is a prime number" <<std::endl;
    }
    else{
        std::cout << "The smallest prime factor of " << n << " is " << spf(n) << std::endl;
    }
}
