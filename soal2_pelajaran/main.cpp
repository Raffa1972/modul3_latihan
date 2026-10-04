#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string nama = "Struktur Data";
    string kode = "STD";

    pelajaran data = create_pelajaran(nama, kode);

    tampil_pelajaran(data);

    return 0;
}