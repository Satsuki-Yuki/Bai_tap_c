#include <iostream>
using namespace std;
    int main(){
        int n, m, s;
        cout << "n = ";
        cin >> n;
        cout << "m = ";
        cin >> m;
        int array[n][m];
        cout << "Nhap mang: ";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> array[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                s += array[i][j];
            }
        }
        cout << "Tong cac phan tu trong mang la " << s;
    }