#include <iostream>
    int main(){
        int n;
        std::cout << "n = ";
        std::cin >> n;
        int s = 0;
        for(int i = 1; i<=n; i+=2){
            s += i;
        }
        std::cout << "Ket qua la " << s;
    return 0;
    }