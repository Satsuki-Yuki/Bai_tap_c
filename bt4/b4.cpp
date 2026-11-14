#include <iostream>
using namespace std;
    int main(){
        int n, m, matrix[10][10];
        do{
            cout << "n = ";
            cin >> n;
        }while(n<2 || n>10);
        do{
            cout << "m = ";
            cin >> m;
        }while(m<2 || m>10);
        int sum;
        cout << "Nhap ma tran: ";
        for(int i = 0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> matrix[i][j];
                if(matrix[i][j]%2!=0){
                    sum += matrix[i][j];
                }
            }
        }
        cout << "Tong cac so le la: " << sum;
        return 0;
    }