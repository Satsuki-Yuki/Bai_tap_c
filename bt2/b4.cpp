#include <iostream>
#include <cmath>
    int main(){
        int a,b;
        std::cout << "a = ";
        std::cin >> a;
        std::cout << "b = ";
        std::cin >> b;
        int tong = a+b;
        int hieu = abs(a-b);
        std::cout << "Gia tri nho hon la " << (tong-hieu)/2;
    return 0;
    }