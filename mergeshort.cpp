#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void inpput() {
    while (true) {
        cout << "Masukan Panjang elemet array: ";
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

   
