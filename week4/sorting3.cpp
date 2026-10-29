#include <iostream>

void myswap(double& swap1, double& swap2){

    double tmp;
    tmp = swap1;
    swap1 = swap2;
    swap2 = tmp;

}

void sort_three_numbers(double& sort1, double& sort2, double& sort3){

    if(sort1>sort2){
        myswap(sort1,sort2);
    }
    if(sort1>sort3){
        myswap(sort1,sort3);
    }
    if(sort2>sort3){
        myswap(sort2,sort3);
    }
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter 3 numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << "\t" << n2 << "\t" << n3 << std::endl;
}