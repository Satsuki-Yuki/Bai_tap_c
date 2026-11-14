#include <iostream>
    int main(){
        int n;
        std::cout << "n = ";
        std::cin >> n;
        bool nt = true;
        for(int i = 2; i<(n-1); i++){
        if(n%i==0){
            nt = false;
            break;
        } 
    }
        if(nt){
            std::cout << "n la so nguyen to";
        } else{
            std::cout << "n khong la so nguyen to";
        }
    return 0;
    }