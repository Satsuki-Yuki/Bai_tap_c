#include <iostream>
#include <string>
    int main(){
        std::string str;
        std::cout << "Nhap chuoi: ";
        std::getline(std::cin, str);
        while(str[0]==' '){
            str.erase(0, 1);
        }
        while(str[str.length()-1]==' '){
            str.erase(str.length()-1, 1);
        }
        std::cout << "Ket qua: " << str;
        return 0;
    }