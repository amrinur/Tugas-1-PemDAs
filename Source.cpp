#include <iostream>
#include <string>
#include <cctype>

using namespace std;


int main() {
    // inisialisasi variabel    
    
    int pilihan;
    string nama;
  

    // tampilan menu

    cout << "Selamat datang di rumah sakit dr. Ahmed Ghozali!" << endl;
    cout << "masukkan nama pendaftaran :" << endl;
    getline(cin, nama);
   // cin >> nama;

   // if (isalpha(nama)) {
        cout << "selamat datang saudara " << nama << endl;
   // }
   // else { cout << "nama anda salah / tidak terdaftar" << endl; }
        

    cout << "Silakan pilih layanan yang tersedia:" << endl;
    cout << "1. Konsultasi Dokter" << endl;
    cout << "2. Pemeriksaan Laboratorium" << endl;
    cout << "3. Vaksinasi COVID-19" << endl;
    cout << "4. Keluar" << endl;
    
    // loop untuk meminta input dari pengguna
    while (true) {
        // meminta input dari pengguna
        cout << "Masukkan pilihan layanan: ";
        cin >> pilihan;

        // memproses pilihan pengguna
        if (pilihan == 1) {
            cout << "Anda memilih layanan Konsultasi Dokter" << endl;
            // kode untuk layanan Konsultasi Dokter
            cout << "Silakan masuk ke ruang pemeriksaaan." << endl;
            cout << "Dokter akan segera memanggil Anda." << endl;
        }
        else if (pilihan == 2) {
            cout << "Anda memilih layanan Pemeriksaan Laboratorium" << endl;
            // kode untuk layanan Pemeriksaan Laboratorium
            cout << "Silakan menuju ruang Laboratorium." << endl;
            cout << "Petugas laboratorium akan segera memeriksa sampel Anda." << endl;
        }
        else if (pilihan == 3) {
            cout << "Anda memilih layanan Vaksinasi COVID-19" << endl;
            // kode untuk layanan Rawat Inap
            cout << "Silakan menuju ruang 006." << endl;
            cout << "Petugas akan segera melayani anda." << endl;
        }
        else if (pilihan == 4) {
            cout << "Terima kasih telah berkunjung. Sampai jumpa!" << endl;
            break;
        }
        else {
            cout << "Pilihan tidak valid. Silakan masukkan angka antara 1-4." << endl;
        }
    }

    return 0;
}
