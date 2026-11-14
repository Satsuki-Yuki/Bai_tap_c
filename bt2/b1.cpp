#include <iostream>
    int main(){
        float a, b;
        std::cout << "a = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
        float c= a+b;
        float d= a-b;
        std::cout << "a + b = " << c << '\n';
        std::cout << "a - b = " << d;
        return 0;
    }