#include <iostream>
using namespace std;
    int main(){
        int arr[10][10], n, m;
            cout << "n = ";
            cin >> n;
            cout << "m = ";
            cin >> m;
        cout << "Nhap mang: ";
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin >> arr[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            int x = arr[i][0];
            for(int j = 0; j < m; j++){
                if(arr[i][j]>x){
                x = arr[i][j];
                }
            } 
            cout << x << " ";
        }
        return 0;
    }