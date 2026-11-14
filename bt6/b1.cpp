#include <iostream>
    void is_prime(int a){
        for(int i = 2; i<a; i++){
            if(a%i==0){
                std::cout << a << " khong la so nguyen to";
                break;
            }std::cout << a << " la so nguyen to";
            break;
        }return;
    }
    int main(){
        int n;
        std::cout << "n = ";
        std::cin >> n;
        is_prime(n);
        return 0;
    } 