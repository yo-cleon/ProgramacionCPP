#include <iostream>
using namespace std;

int main() {

  // DECLARACION DE VARIABLES
  string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes",
      "Sábado", "Domingo"};
  int x;
  int y;
  int* ptr;

  cout << "Introduce un número: ";
  cin >> x;
  cout << "Introduce otro número: ";
  cin >> y;

  cout << "el mayor es: " << max(x,y) << "\n";

  // OPERADOR TERNARIO DE ASIGNACION
  string result = (x > y) ? "la suma es: " : "la resta es: ";
  cout << result;

  // IF... ELSE TRADICIONAL
  if (x > y) {
    cout <<  x + y <<endl;
  } else {
    cout <<  x - y <<endl;
  }

  if (x > y) {
    do {  //USO DE BUCLE DO .. WHILE
      if (y == 4){
        y++;
        continue;
      }
      cout << y << "\n";
      y++;
    }
    while (x>= y);
  }

  // USO DE BUCLE FOR
  cout << "\n**** DIAS DE LA SEMANA ****\n";
  for (int i = 0; i < (sizeof(dias)/ sizeof(*dias)); i++) {
    cout << dias[i] << endl;
  }
  cout << "**********************\n";

  //USO DE PUNTEROS
  ptr = &x;
  cout << "Valor de y: ";
  cout << y << endl;
  cout << "Valor de x: ";
  cout << x << endl;
  cout << &x <<endl;
  cout << ptr << endl;
  cout << *ptr << endl;

  //CAMBIAR VALOR DE PUNTEROS
  *ptr = y;
  cout << "valor del puntero: ";
  cout << *ptr << endl;
  cout << "Valor de x: ";
  cout << x << endl;
  cout << "Valor de y: ";
  cout << y << endl;
  cout << "Finaliza el programa";
  return 0;
}
