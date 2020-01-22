#include <iostream>
using namespace std;

class myCar {
  public:
    string marca;
    int kms;

    void arrancar() {
      cout << "brum, brum \n";
    }

};

int main() {

  myCar car1;
  car1.marca = "seat";
  car1.kms = 100000;
  cout << "**** Mi coche ***\n";
  cout << "\t" << car1.marca << endl;
  cout << "\t" << car1.kms << endl;
  car1.arrancar();
  cout << "******************\n";

  cout << "\n";

  myCar car2;
  car2.marca = "Hiunday";
  car2.kms = 150000;
  cout << "**** Mi coche ***\n";
  cout << "\t" << car2.marca << endl;
  cout << "\t" << car2.kms << endl;
  cout << "******************\n";
  return 0;
}
