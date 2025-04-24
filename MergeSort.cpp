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

    for(int i=0;i<n;i++){
        cout << "data ke-" << (i+1) << "=";
        cin >> arr[i];
    }

}        

void mergesort(int low,int hi)
    if (low >= high)
    {
        return;
    }

    int mid = (low+high)/ 2;

    mergesort(low,high);
    mergesort(mid+low,high);

    int i = low;   
    int j = mid + 1;
    int k = low;   

    while (i <= mid && j <= high) // step 4.d
    {
        if (arr[i] <= arr[j]) // step 4.d.i
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    } 
    while (j <= high)
     {
         B[k] = arr[j];
         j++;
         k++;
     }
 
     while (i <= mid)
     {
         B[k] = arr[i];
         i++;
         k++;
     }
    