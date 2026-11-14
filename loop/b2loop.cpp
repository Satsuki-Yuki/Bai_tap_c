#include <iostream>
#include <cmath>
    int main(){
        int n;
        std::cout << "n = ";
        std::cin >> n;
        int s = 0;
        for(int i = 1; i<=n; i++){
            s += pow(i, 2);
        }
        std::cout << "S = " << s;
    return 0;
    }