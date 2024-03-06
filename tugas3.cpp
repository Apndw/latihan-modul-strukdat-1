#include <map>
#include <iostream>

using namespace std;

struct CityRecord {
  string name;
  int population;
  double tax;
};

int main() {
  CityRecord city[4];

  city[0] = {"Purwokerto", 250, 2.4};
  city[1] = {"Kebumen", 100, 2.4};
  city[2] = {"Jogja", 350, 2.4};
  city[3] = {"Tegal", 150, 2.4};

  int cityLength = sizeof(city) / sizeof(*city);

  for (int i = 0; i < cityLength; i++) {
    if (city[i].name != "Tegal") continue;

    cout << "Current city is " << city[i].name << endl;
    cout << "With total population " << city[i].population << endl;
    cout << "And average tax ratio " << city[i].tax << endl;
    cout << "==========================" << endl;
  }

  map<string, CityRecord> cityMap;

  cityMap["Purwokerto"] = CityRecord { "Purwokerto", 250, 2.4 };
  cityMap["Kebumen"] = CityRecord { "Kebumen", 100, 2.4 };
  cityMap["Jogja"] = CityRecord { "Jogja", 350, 2.4 };
  cityMap["Tegal"] = CityRecord { "Tegal", 150, 2.4 };

  if (cityMap.find("Tegal") != cityMap.end()) {
    cout << "Current city is " << cityMap["Tegal"].name << endl;
    cout << "With total population " << cityMap["Tegal"].population << endl;
    cout << "And average tax ratio " << cityMap["Tegal"].tax << endl;
    cout << "==========================" << endl;
  }

  return 0;
}
