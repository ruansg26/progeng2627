#include <iostream>

int main(){
    int n;
    std::cin>> n;

    for(int m=1; m<=n; m++ ){    

        for(int i=1; i<=n; i++ ){
            std::cout << i*m;
            std::cout<< "\t";
        }
        std::cout<< "\n"; 
    }
}