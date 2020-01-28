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

/* In C++, there are three access specifiers:
- public - members are accessible from outside the class
- private - members cannot be accessed (or viewed) from outside the class
- protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about
*/
class myCar2 {
public:
  string marca;
  int kms;
  // Using a constructor with parameters
  myCar2(string x, int y) {
    marca = x;
    kms = y;
  }

  //Definition of a method/function INSIDE a class
  private:
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
  // This function is private so is not allowed and an error occurs
  car2.arrancar();
  cout << "******************\n";
  return 0;

}
