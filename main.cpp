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
int main() {
    int pilihan;
    while (true) {
        print_menu();
        cout << "Pilih jenis pensil yang ingin dibeli: ";
        cin >> pilihan;
        if (pilihan == 1) {
            Pensil warna;
            warna.jenis_pensil = "Pensil Warna";
            warna.harga_pensil = 15000;
            beli_pensil(warna);
        } else if (pilihan == 2) {
            Pensil gambar;
            gambar.jenis_pensil = "Pensil Gambar";
            gambar.harga_pensil = 100000;
            beli_pensil(gambar);
        } else if (pilihan == 3) {
            Pensil mekanik;
            mekanik.jenis_pensil = "Pensil Mekanik";
            mekanik.harga_pensil = 50000;
            beli_pensil(mekanik);
        } else if (pilihan == 4) {
            Pensil conte;
            conte.jenis_pensil = "Pensil Conte";
            conte.harga_pensil = 90000;
            beli_pensil(conte);
        } else if (pilihan == 5) {
            cout << "Terima kasih telah menggunakan program ini!" << endl;
            break;
        } else {
            cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    }
    return 0;
}



