#include <iostream>
using namespace std;
    int main(){
        int n, m, matrix1[10][10], matrix2[10][10];
        do{
            cout << "n = ";
            cin >> n;
        }while(n<2 || n>10);
        do{
            cout << "m = ";
            cin >> m;
        }while(m<2 || m>10);
        cout << "Nhap ma tran 1: ";
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin >> matrix1[i][j];
            }
        }
        cout << "Nhap ma tran 2: ";
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin >> matrix2[i][j];
            }
        }
        cout << "Tong hai ma tran: " << '\n';
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cout << matrix1[i][j] + matrix2[i][j] << " ";
            }cout << '\n';
        }
        return 0;
    }