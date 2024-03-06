#include <iostream>

using namespace std;

class Car {
  double topspeed = 0;

  public:
    string name, engine;
    double speed = 0;
    int gear = 3;
    
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

struct Driver {
  string nama, team;
  int number;
};

int main() {
  Car car;
  car.name = "RB20";
  car.engine = "V6";
  car.gear = 8;
  car.speed = 45;
  car.print();

  Driver driver;
  driver = { "Max Verstappen", "Red Bull Power Train Honda", 1 };

  cout << "Nama pembalap " << driver.nama << endl;
  cout << "Team pembalap " << driver.team << endl;
  cout << "Nomor pembalap " << driver.number << endl;

  return 0;
}
