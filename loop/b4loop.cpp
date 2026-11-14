#include <iostream>
    int main(){
        int n;
        std::cout << "n = ";
        std::cin >> n;
        for(int i=5; i<=n; i += 5){
           std::cout << i << " ";
        }
    return 0;
    }