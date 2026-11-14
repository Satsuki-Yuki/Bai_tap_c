#include <iostream>
    int main(){
        int n;
        std::cout << "n = ";
        std::cin >> n;
        int s=0;
        while(n > 0){
            s += (n % 10);
            n /= 10;
        }
        std::cout << "Ket qua la " << s;
        return 0;
    }