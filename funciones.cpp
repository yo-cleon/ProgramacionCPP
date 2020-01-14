#include <iostream>
using namespace std;

/* Si las funciones se definen después de la función main(), éstas deben
  declararse al principio del programa. */
void listarNumeros(int x, int &y); // declaración de la funcion

/* Overloading o sobreescritura de funciones: podemos tener varias funciones
con el mismo nombre, siempre que los parámetros que reciban sean diferentes */
void sumar(int x, int y);
void sumar(double x, double y);


int main() {

  cout << "**** TRABAJO CON FUNCIONES ****" << endl;

  int x;
  int y;
  double u;
  double v;

  cout << "Introduce un número: ";
  cin >> x;
  cout << "Introduce otro número: ";
  cin >> y;

  cout << "el mayor es: " << max(x,y) << "\n";
  cout << "\n";


  //USO DE FUNCIONES
  listarNumeros(x, y);

  sumar(x,y);

  u = x * 1.3;
  v = y * 1.3;

  sumar(u, v);

  cout << "Finaliza el programa";
  return 0;
}

/* Definición de la función. El parámetro x
se pasa por valor y el parámetro y se pasa por referencia */
void listarNumeros(int x, int &y) {
  cout << "*** Lista todos los valores menos el 4 ***\n";
  if (x > y) {
    do {
      if (y == 4){
        y++;
        continue;
      }
      cout << y << "\n";
      y++;
    }
    while (x>= y);
  }
  cout << "************************\n";
  cout << "\n";
}

void sumar(int x, int y) {
  cout << "La suma es: " << x + y << endl;
}


void sumar(double x, double y) {
  cout << "La suma es: " << x + y << endl;
}
