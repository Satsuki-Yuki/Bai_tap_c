#include <iostream>
using namespace std;
    int main(){
        int numbers[11];
        int n;
        cout << "n = ";
        cin >> n;
        cout << "Nhap mang: ";
        for(int i = 0; i<n; i++){
            cin >> numbers[i];
        }
        int x;
        cout << "x = ";
        cin >> x;
        numbers[n]=x;
        n++;
        cout << "Mang sau khi them ";
        for(int i = 0; i<n; i++){
            cout << numbers[i] << " ";
        }
        return 0;
    }