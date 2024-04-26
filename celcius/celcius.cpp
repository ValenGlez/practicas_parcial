/*
1.Conversor de celcius a fahrenheit

[]Declarar la variable de "celcius"
[]Pedir a el usuario que declare la variable "celcius"
[]Aplicarle a la varieable la formula de conversion a fahrenheit y mostrarla
*/

#include <iostream>

using namespace std;
int main (){

int celcius;

cout << "Ingrese una temperatura en grados celcius para verla en fahrenheit." << endl;
cin >> celcius;

cout << "La temperatura es de " << (celcius * 1.8 + 32) << " grados F." << endl;

return 0;
}
