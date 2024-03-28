#include <iostream>
using namespace std;

class Pensil {
public:
    string jenis_pensil;
    int harga_pensil;
};

void print_menu() {
    cout << "Menu Pembelian Pensil" << endl;
    cout << "1. Pensil Warna" << endl;
    cout << "2. Pensil Gambar" << endl;
    cout << "3. Pensil Mekanik" << endl;
    cout << "4. Pensil Conte" << endl;
    cout << "5. Keluar Program" << endl;
}
void print_invoice(int jumlah_pensil, int total_harga) {
    cout << "================================" << endl;
    cout << "         INVOICE                " << endl;
    cout << "================================" << endl;
    cout << "Jumlah pensil: " << jumlah_pensil << endl;
    cout << "Total harga: Rp " << total_harga << endl;
    cout << "Terima kasih telah berbelanja!" << endl;
    cout << "================================" << endl;
}
int hitung_diskon(int total_harga) {
    int diskon = 0;
    if (total_harga >= 500000) {
        diskon = total_harga * 0.1;
    }
    return diskon;
}
int hitung_total_harga(int harga_pensil, int jumlah_pensil) {
    int total_harga = harga_pensil * jumlah_pensil;
    return total_harga;
}
void beli_pensil(Pensil pensil) {
    int jumlah_pensil;
    cout << "Harga " << pensil.jenis_pensil << ": Rp " << pensil.harga_pensil << endl;
    cout << "Jumlah " << pensil.jenis_pensil << " yang ingin dibeli: ";
    cin >> jumlah_pensil;
    int total_harga = hitung_total_harga(pensil.harga_pensil, jumlah_pensil);
    int diskon = hitung_diskon(total_harga);
    int total_harga_setelah_diskon = total_harga - diskon;
    print_invoice(jumlah_pensil, total_harga_setelah_diskon);
}



