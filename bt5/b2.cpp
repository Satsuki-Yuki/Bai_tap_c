#include <iostream>
#include <string>
    int main(){
        std::string str;
        std::cout << "Nhap chuoi: ";
        std::getline(std::cin, str);
        int i =0;
        while(i<str.length()){
            if(str[i+1]==' ' && str[i]==' '){
                str.erase(i, 1);
            }else i++;
        }
        std::cout << "Ket qua: " << str;
    }