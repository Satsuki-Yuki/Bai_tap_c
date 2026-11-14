#include <iostream>
#include <string>
    int main(){
        std::string str;
        std::cout << "Nhap chuoi: ";
        getline(std::cin, str);
        while(str[0]==' '){
            str.erase(0, 1);
        }
        while(str[str.length()-1]==' '){
            str.erase(str.length()-1, 1);
        }
        int i = 0;
        while(i<str.length()-1){
            if(str[i]==' ' && str[i+1]==' '){
                str.erase(i+1, 1);
            }else i++;
        }
        for(int j = 0; j<str.length(); j++){
            str[j]=tolower(str[j]);
        }
        if(str[0]!=' '){
            str[0]=toupper(str[0]);
        }
        for(int j = 0; j<str.length()-1; j++){
            if(str[j]==' ' && str[j+1]!=' '){
                str[j+1]=toupper(str[j+1]);
            }
        }
        std::cout << "Ket qua: " << str;
    }