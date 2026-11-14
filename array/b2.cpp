#include <iostream>
using namespace std;
    int main(){
        int numbers[10];
        int n, x;
        do{
            cout << "n = ";
            cin >> n;
        } while(n <= 0 || n>10);
        cout << "Nhap mang: ";
        for(int i = 0; i<n; i++){
           do{
            cin >> numbers[i];
           } while(numbers[i]<=0);
        }
        do{
            cout << "x = ";
            cin >> x;
        } while(x<0||x>=n);
        for(int i = x; i<(n-1); i++){
            numbers[i]=numbers[i+1];
        }
        n--;
        cout << "Mang sau khi xoa: ";
        for(int i = 0; i<n; i++){
            cout << numbers[i] << " ";
        }
        return 0;
    }