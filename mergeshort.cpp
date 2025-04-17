#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void inpput() {
    while (true) {
        count << "Masukan Panjang elemet array: "
        cin >> n;

        if (n<= 20) {
            break;
        }
        else {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n=======================";
    cout << "\nInput isi element Array";
    cout << "\n=======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Array index ke-" << i << ": ";
        cin >> arr[i];
    }
}