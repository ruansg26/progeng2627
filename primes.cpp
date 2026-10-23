#include <iostream>
int main(){
    int n, rem;
    std::cin >> n;
    bool factor = false;

    for(int i=2;i<n;i++){
        rem=n%i;
        if(rem==0){
            factor = true;
        }
    }
    if(factor){
        std::cout << n << " is not a prime number" << std::endl;
    }
    else{
        std::cout << n << " is a prime number" << std::endl;
    }
} 