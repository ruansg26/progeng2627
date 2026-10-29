#include <iostream>
#include <string>

void myswap(std::string& s1, std::string& s2){

    std::string tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;

}

int main(){
    std::string s1, s2;

    std::cout << "please enter two words" << std::endl;
    std::cin >> s1 >> s2;

    std::cout << "you entered:" << std::endl;
    std::cout << "word one: " << s1 << std::endl;
    std::cout << "word two: " << s2 << std::endl;

    myswap(s1, s2);

    std::cout << "after swapping the words:" << std::endl;
    std::cout << "word one: " << s1 << std::endl;
    std::cout << "word two: " << s2 << std::endl;
} 