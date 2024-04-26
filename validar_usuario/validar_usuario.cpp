/*
3. Validar usuario y contraseña
[] Declarar un string para el ususario y uno para la contraseña
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
        cout << "Ahora ingrese la contraseña." << endl;
        cin >> contrasenia;


while (usuario != "ValenGlez" || contrasenia != "abc123"){

        cout << "Usuario o contraseña incorrecta. Ingrese el nombre de usuario nuevamente." << endl;
        cin >> usuario;
        cout << "Ahora ingrese la contraseña nuevamente." << endl;
        cin >> contrasenia;

}
cout << "Usuario validado." << endl;

    return 0;
}
