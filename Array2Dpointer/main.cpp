#include <iostream>

using namespace std;

void cetakArray(int data[3][3]) {
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            cout << data[baris][kolom] << "\t";
        }
        cout << endl;
    }
}

void tukarNilai(int dataA[3][3], int dataB[3][3], int baris, int kolom) {
    int sementara = dataA[baris][kolom];

    dataA[baris][kolom] = dataB[baris][kolom];
    dataB[baris][kolom] = sementara;
}

void tukarDenganPointer(int *nilaiA, int *nilaiB) {
    int sementara = *nilaiA;

    *nilaiA = *nilaiB;
    *nilaiB = sementara;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    cout << "=== DATA ARRAY A ===" << endl;
    cetakArray(A);

    cout << "\n=== DATA ARRAY B ===" << endl;
    cetakArray(B);

    cout << "\n=== PERTUKARAN ARRAY [0][0] ===" << endl;

    tukarNilai(A, B, 0, 0);

    cout << "\nArray A setelah pertukaran:" << endl;
    cetakArray(A);

    cout << "\nArray B setelah pertukaran:" << endl;
    cetakArray(B);

    int *ptrA = &A[1][1];
    int *ptrB = &B[1][1];

    cout << "\n=== PERTUKARAN MENGGUNAKAN POINTER ===" << endl;

    tukarDenganPointer(ptrA, ptrB);

    cout << "\nArray A setelah pertukaran pointer:" << endl;
    cetakArray(A);

    cout << "\nArray B setelah pertukaran pointer:" << endl;
    cetakArray(B);

    return 0;
}