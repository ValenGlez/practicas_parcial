/*
3. Validar usuario y contraseņa
[] Declarar un string para el ususario y uno para la contraseņa
[]
[]
{]

*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;
int main ()
{

    string usuario;
    string contrasenia;

        cout << "Ingrese el nombre de usuario." << endl;
        cin >> usuario;
        cout << "Ahora ingrese la contraseņa." << endl;
        cin >> contrasenia;


while (usuario != "ValenGlez" || contrasenia != "abc123"){

        cout << "Usuario o contraseņa incorrecta. Ingrese el nombre de usuario nuevamente." << endl;
        cin >> usuario;
        cout << "Ahora ingrese la contraseņa nuevamente." << endl;
        cin >> contrasenia;

}
cout << "Usuario validado." << endl;

    return 0;
}
