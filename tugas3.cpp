#include <map>
#include <iostream>

using namespace std;

/**
 * Membuat struct CityRecord untuk menyimpan data kota
 *
 * @struct CityRecord
 */
struct CityRecord {
  string name;
  int population;
  double tax;
};

int main() {
  // Inisiasi array dengan nama city bertipe data struct CityRecord
  CityRecord city[4];

  // Isi tiap slot array dengan kota sekitar purwokerto
  city[0] = {"Purwokerto", 250, 2.4};
  city[1] = {"Kebumen", 100, 2.4};
  city[2] = {"Jogja", 350, 2.4};
  city[3] = {"Tegal", 150, 2.4};

  // Ambil panjang array pada variable city
  int cityLength = sizeof(city) / sizeof(*city);

  // Lakukan perulangan dengan iterator mulai dari 0 hingga panjang array city
  for (int i = 0; i < cityLength; i++) {
    // Jika nama kota bukan tegal maka lewati perulangan sekarang
    if (city[i].name != "Tegal") continue;

    // Cetak data kota tegal
    cout << "Current city is " << city[i].name << endl;
    cout << "With total population " << city[i].population << endl;
    cout << "And average tax ratio " << city[i].tax << endl;
    cout << "==========================" << endl;
  }

  // Inisiasi map dengan variable cityMap
  map<string, CityRecord> cityMap;

  // Isi tiap slot map sejumlah 4 dengan kota sekitar purwokerto
  cityMap["Purwokerto"] = CityRecord { "Purwokerto", 250, 2.4 };
  cityMap["Kebumen"] = CityRecord { "Kebumen", 100, 2.4 };
  cityMap["Jogja"] = CityRecord { "Jogja", 350, 2.4 };
  cityMap["Tegal"] = CityRecord { "Tegal", 150, 2.4 };

  // Cek apakah kota tegal terdapat pada cityMap
  if (cityMap.find("Tegal") != cityMap.end()) {
    // Jika ada cetak data kota tegal
    cout << "Current city is " << cityMap["Tegal"].name << endl;
    cout << "With total population " << cityMap["Tegal"].population << endl;
    cout << "And average tax ratio " << cityMap["Tegal"].tax << endl;
    cout << "==========================" << endl;
  }

  return 0;
}
