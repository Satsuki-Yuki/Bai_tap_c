#include <iostream>
using namespace std;
    int main(){
        int arr[10], n, x;
        do{
            cout << "n = ";
            cin >> n;
        }while(n<=0||n>10);
        cout << "Nhap mang: ";
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        x=arr[0];
        for(int i = 1; i<n; i++){
            if(arr[i]>x){
                x=arr[i];
            }
        }
        cout << "Gia tri lon nhat la: ";
        cout << x;
        return 0;
    }