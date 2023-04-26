#include <iostream>
using namespace std;

int main() {
    // Deklarasi matriks dengan 3 baris dan 5 kolom
    int matriks[3][5];

    // Input nilai pada setiap elemen matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Masukkan nilai matriks[" << i << "][" << j << "]: "<<endl;
            cin >> matriks[i][j];
        }
    }

    // Output nilai pada setiap elemen matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}