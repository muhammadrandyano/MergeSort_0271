#include <iostream>
using namespace std;

int arr[20],B[20];
int n;

void input(){
    while (true){
        cout << "Masukkan Jumlah data pada array = ";
        cin >> n;

        if (n <= 20 ){
            break;
        }
        else{
            cout << "\nArray maksimal 20 element.\n";
        }
    }
    cout << endl;
    cout << "======================" <<endl;
    cout << "Masukkan element array" <<endl;
    cout << "======================" <<endl;

    
}        
