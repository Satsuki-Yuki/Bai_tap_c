#include <iostream>
    int main(){
        char a;
        std::cout << "Chu cai viet thuong: ";
        std::cin >> a;
        std::cout << "Chu cai viet hoa: " << (char)(a-32);
    return 0;
    }