/*
3. Validar usuario y contrase�a
[] Declarar un string para el ususario y uno para la contrase�a
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
        cout << "Ahora ingrese la contrase�a." << endl;
        cin >> contrasenia;


while (usuario != "ValenGlez" || contrasenia != "abc123"){

        cout << "Usuario o contrase�a incorrecta. Ingrese el nombre de usuario nuevamente." << endl;
        cin >> usuario;
        cout << "Ahora ingrese la contrase�a nuevamente." << endl;
        cin >> contrasenia;

}
cout << "Usuario validado." << endl;

    return 0;
}
