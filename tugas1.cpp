#include <iostream>

using namespace std;

double perhitunganLuasSegitiga() {
  double base, height;
  
  cout << "Masukan alas segitiga : ";
  cin >> base;

  cout << "Masukan tinggi segitiga : ";
  cin >> height;
  
  return 0.5 * base * height;
}

double perhitunganLuasPersegi() {
  double side;

  cout << "Masukan sisi persegi : ";
  cin >> side;

  return side * side;
}

int main() {
  int choice;
  bool isRunning = true;
  
  do {
    cout << "Perhitungan Sederhana" << endl;
    cout << "=====================" << endl;
    cout << "1. Hitung luas segitiga" << endl;
    cout << "2. Hitung luas persegi" << endl;
    cout << "3. Keluar" << endl;
    cout << "=====================" << endl;
    cout << "Masukan pilihan kamu : ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Hasil dari perhitungan adalah " << perhitunganLuasSegitiga() << endl;
        break;
      case 2:
        cout << "Hasil dari perhitungan adalah " << perhitunganLuasPersegi() << endl;
        break;
      case 3:
        isRunning = false;
        break;
      default:
        cout << "Pilihan tidak valid" << endl;
        break;
    }
  } while (isRunning);
  
  cout << "Terima kasih sudah menggunakan system kami :)" << endl;

  return 0;
}
