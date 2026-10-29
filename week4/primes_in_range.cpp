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
    int n1, n2;
    std::cout << "Enter range:" << std::endl;
    std::cin >> n1 >> n2;

    for(int i=n1; i<=n2; i++){
        if(spf(i) == i){
            std::cout << i << "\t";
        }
    }
    std::cout << std::endl;

}