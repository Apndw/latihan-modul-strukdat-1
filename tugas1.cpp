#include <iostream>

using namespace std;

/**
 * Fungsi untuk mendapatkan inputan 2 data
 * Yaitu Alas dan Tinggi dari segitiga
 * Kemudian kembalikan hasil dengan rumus
 * 1/2 * alas * tinggi
 *
 * @return double
 */
double perhitunganLuasSegitiga() {
  // Inisiasi variable alas dan tinggi
  double base, height;
  
  // Ambil inputan user untuk alas
  cout << "Masukan alas segitiga : ";
  cin >> base;

  // Ambil inputan user untuk tinggi
  cout << "Masukan tinggi segitiga : ";
  cin >> height;

  // Kembalikan nilai dengan rumus segitiga
  return 0.5 * base * height;
}

/**
 * Fungsi untuk menghitung luas persegi
 * Dengan rumus, sisi * sisi
 *
 * @return double
 */
double perhitunganLuasPersegi() {
  // Inisiasi variable untuk sisi persegi
  double side;

  // Ambil inputan user untuk sisi
  cout << "Masukan sisi persegi : ";
  cin >> side;

  //  Kembalikan nilai dengan rumus persegi
  return side * side;
}

int main() {
  // Inisiasi variable untuk menampung pilihan menu
  int choice;

  // Inisiasi variable untuk kondisi perulangan
  bool isRunning = true;
  
  do {
    // Tampilkan menu dan ambil pilihan menu user
    cout << "Perhitungan Sederhana" << endl;
    cout << "=====================" << endl;
    cout << "1. Hitung luas segitiga" << endl;
    cout << "2. Hitung luas persegi" << endl;
    cout << "3. Keluar" << endl;
    cout << "=====================" << endl;
    cout << "Masukan pilihan kamu : ";
    cin >> choice;

    // Check apakah pilihan valid, jika iya jalankan fungsi sesuai menu
    switch (choice) {
      case 1:
        // Jika user memilih menu 1, maka jalankan fungsi hitung luas segitiga
        cout << "Hasil dari perhitungan adalah " << perhitunganLuasSegitiga() << endl;
        break;
      case 2:
        // Jika user memilih menu 2, maka jalankan fungsi hitung luas persegi
        cout << "Hasil dari perhitungan adalah " << perhitunganLuasPersegi() << endl;
        break;
      case 3:
        // Jika user memilih menu 3, maka ubah status isRunning menjadi false
        isRunning = false;
        break;
      default:
        // Jika pilihan tidak valid, maka system mencetak pilihan tidak valid
        cout << "Pilihan tidak valid" << endl;
        break;
    }
  } while (isRunning); // Apabila kondisi bernilai true, maka ulangin perulangan
  
  cout << "Terima kasih sudah menggunakan system kami :)" << endl;

  return 0;
}
