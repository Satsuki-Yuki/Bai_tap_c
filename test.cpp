#include <iostream>
    int main(){
        int i = 1;
        while(i<=10){
            if(i == 5){
                i++;
                continue;
            }
            std::cout << i << " ";
            i++;
        }
        return 0;
    }