#include <iostream>
    int main(){
        float degf;
        std::cout << "F = ";
        std::cin >> degf;
        float degc= (degf-32)/1.8;
            std::cout << "C= " << degc;
    return 0;
    }