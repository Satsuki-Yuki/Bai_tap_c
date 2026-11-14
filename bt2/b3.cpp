#include <iostream>
    int main(){
        int a,b;
        std::cout << "a = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
        int c = a;
        a = b;
        b = c;
        std::cout << "Gia tri cua a la " << a << '\n';
        std::cout << "Gia tri cua b la " << b;
    return 0;
    }