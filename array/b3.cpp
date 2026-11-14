#include <iostream>
using namespace std;
    int main(){
        int numbers[11];
        int n, x, y;
        do{
            cout << "n = ";
            cin >> n;
        } while(n<=0||n>10);
        cout << "Nhap mang: ";
        for(int i=0; i<n; i++){
            cin >> numbers[i];
        }
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        for(int i=n; i>x; i--){
            numbers[i]=numbers[i-1];
        }
        n++;
        numbers[x]=y;
        cout << "Mang sau khi thay doi: ";
        for(int i=0; i<n; i++){
            cout << numbers[i] << " ";
        } 
        return 0;
        }