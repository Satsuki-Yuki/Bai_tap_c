#include <iostream>
    using namespace std;
    int main(){
        int n, m, arr[10][10];
        cout << "n = ";
        cin >> n;
        cout << "m = ";
        cin >> m;
        cout << "Nhap mang: " << '\n';
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin >> arr[i][j];
            }
        }
        int x = 0;
        cout << "Tong cac gia tri bien la ";
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(i == 0 || j == 0 || i == n-1 || j == m-1){
                    x += arr[i][j];
                }
            }
        }
        cout << x;
    }