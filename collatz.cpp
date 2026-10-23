#include <iostream>
int main(){
    int n, i, max;
    std::cin >> n;
    
    for(i=0;n!=1;i++){
        if(n%2==0){
            n=n/2; 
        }
        else{
            n=3*n+1;
            if(n>max){
                max=n;
            }
        }
        std::cout << n << "\t";

    }
    std::cout << std::endl << "steps: " << i << std::endl << "the maximum number generated was: "<< max << std::endl;
}
