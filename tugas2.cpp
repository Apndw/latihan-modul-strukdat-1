#include <iostream>

using namespace std;

/**
 * Membuat class Car untuk mengatur data kendaraan
 *
 * @class Car
 */
class Car {
  // Inisiasi variable topspeed dengan default value 0
  double topspeed = 0;

  public:
    // Inisiasi variable untuk menyimpan nama dan tipe mesin kendaraan
    char name[100], engine[100];

    // Inisiasi variable untuk menyimpan data kecepatan kendaraan
    double speed = 0;

    // Inisiasi variable untuk menyimpan data total gigi kendaraan
    int gear = 3;
    
    /**
     * Prosedural untuk mencetak tiap nilai dari public maupun private variable
     *
     * @return void
     */
    void print() {
      topspeed = speed * gear;
      
      cout << "=================" << endl;
      cout << "Nama kendaraan " << name << endl;
      cout << "Jenis mesin " << engine << endl;
      cout << "Kecepatan kendaraan " << speed << endl;
      cout << "Total roda gigi " << gear << endl;
      cout << "Kecepatan maksimal " << topspeed << endl;
      cout << "=================" << endl;
    }
};

/**
 * Membuat struktur Driver untuk menyimpan data pembalap
 *
 * @struct Driver
 */
struct Driver {
  string nama, team;
  int number;
};

int main() {
  // Inisiasi variable car dengan tipe data class Car
  Car car;

  // Isi data nama dan mesin dengan fungsi strcpy
  // Digunakan untuk mengubah string ke tipe data char
  strcpy(car.name, "RB20");
  strcpy(car.engine, "V6");

  // Isi nilai dengan integer
  car.gear = 8;
  car.speed = 45;

  // Cetak data kendaraan
  car.print();

  //Inisiasi variable driver dengan tipe data struct Driver
  Driver driver;

  // Isi nilai struct
  driver = { "Max Verstappen", "Red Bull Power Train Honda", 1 };

  // Cetak nilai dari struct pada variable driver
  cout << "Nama pembalap " << driver.nama << endl;
  cout << "Team pembalap " << driver.team << endl;
  cout << "Nomor pembalap " << driver.number << endl;

  return 0;
}
