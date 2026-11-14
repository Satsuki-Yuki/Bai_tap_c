#include <iostream>
using namespace std;
    int main(){
        int n, k, arr[10];
        do{
            cout << "n = ";
            cin >> n;
        }while(n<2||n>10);
        cout << "Nhap mang: ";
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        cout << "k = ";
        cin >> k;
        int i, j;
        for(int i=0; i<n-1; i++){
            for(int j = i+1; j<n;j++){
                if(arr[i]+arr[j]==k){
                    cout << "Ket qua: " << i << " " << j;
                    return 0;
                }
            }
        }
        cout << "Khong co gia tri thoa man";
        return 0;
    }