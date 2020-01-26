#include <iostream>
using namespace std;

//Definition of a class
class myCar {
  public:
    string marca;
    int kms;

    //Definition of a method/function INSIDE a class
    void arrancar() {
      cout << "brum, brum \n";
    };
    //Declaration of a method/function defined OUTSIDE of a class
    void frenar();
};

//Definition of a method/function OUTSIDE a class
void myCar::frenar() {
  cout << "Frenando el ritmo" << endl;
}

class myCar2 {
public:
  string marca;
  int kms;

  myCar2(string x, int y) {
    marca = x;
    kms = y;
  }

  //Definition of a method/function INSIDE a class
  void arrancar() {
    cout << "Este coche también acelera \n";
  };
};

int main() {

  myCar car1;
  car1.marca = "seat";
  car1.kms = 100000;
  cout << "**** Mi coche ***\n";
  cout << "\t" << car1.marca << endl;
  cout << "\t" << car1.kms << endl;
  car1.arrancar();
  car1.frenar();
  cout << "******************\n";

  cout << "\n";

  myCar2 car2("Hiundya", 15000);
  cout << "**** Mi coche ***\n";
  cout << "\t" << car2.marca << endl;
  cout << "\t" << car2.kms << endl;
  car2.arrancar();
  cout << "******************\n";
  return 0;

}
