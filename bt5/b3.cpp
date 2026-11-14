#include <iostream>
#include <string>
    int main(){
        std::string str;
        std::cout << "Nhap chuoi: ";
        getline(std::cin, str);
        //chuyen thanh chu viet thuong
        for(int i = 0; i<str.length();i++){
            str[i]=tolower(str[i]);
        }
        //chuyen chu cai dau thanh chu hoa
        if(str[0]!=' '){
            str[0]=toupper(str[0]);
        }
        for(int i = 0; i<str.length();i++){
            if(str[i]==' ' && str[i+1]!=' '){
                str[i+1]=toupper(str[i+1]);
            }
        }
        std::cout << "Ket qua: " << str;
        return 0;
    }