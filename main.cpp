#include <iostream>

int main() {

    char c = 'p';
    int a = 789;
    std::cout << c/a<<std::endl;
    std::cout << c*a<<std::endl;
    std::cout << c+a<<std::endl;
    std::cout << c-a<<std::endl;
    std::cout << float(c/a)<<std::endl;
    std::cout << (c/float(a))<<std::endl;
    c=c*a;
    std::cout << c<<std::endl;
    std::cout <<char(c/a)<<std::endl;


    return 0;
}