// TEMA:
#include<iostream>
#include <string>
using namespace std;

// DEFINCION / CREACION DE UNA VARIABLE
// TIPO DE DATO + NOMBRE + ASIGNACION + VALOR ASIGNADO + PUNTO Y COMA
int edad = 23;
char letra = 'R';
string nombre = "Roberto";

// CREACION DE UNA FUNCION
// TIPO DE DATO + NOMBRE + PARENTESIS + LLAVES
void suma() {

}

void Resta() {
  cout << "---- RESTA ---- " << endl;
  int a = 0;
  int b = 0;
  int result = 0;

  cout << "Ingresa el primer valor: ";
  cin >> a;
  cout << endl;
  cout << "Ingresa el segundo valor: ";
  cin >> b;
  cout << endl;

  result = a - b;
  cout << "El resultado de la resta es: " << result << endl;
}

// Punto de inicio
int main()
{
  Resta();


  return 0;
}

