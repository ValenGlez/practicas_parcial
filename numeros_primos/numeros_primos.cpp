/*
4.Determinar si un numero es primo
[]Declarar la variable "numero"
[]Pedir a el usuario que ingrese un numero e inicializar la variable
[]Haces un if para verificar que el numero ingresado es natural
[]Declarar una variable "contador" para uasrla como un contador
[]Hacer un for que vaya viendo numero por numero hasta el ingresado
[](dentro del for) Hacer un if que vea si el resto de un numero es igual a 0, en ese caso sumarle un numero a el contador
[](fuera del for) Verificar con distintos if si el contador es igual a 2, en ese caso el numero es primo, sino no
[]Mostrar el resultado de si es primo o no
*/

#include <iostream>

using namespace std;
int main ()
{

    int numero;

    cout << "Ingrese un numero para ver si es primo o no." << endl;
    cin >> numero;


    if (numero < 1)
    {
        cout << "El numero debe ser un numero natural" << endl;
    }

    int contador = 0;

    for (int i = 1; i <= numero; i++ )
    {
        if ((numero % i) == 0)
        {
            contador++;
        }
    }
        if (contador == 2)
        {
            cout << "El numero es primo." << endl;
        }
        else if (contador != 2)
        {
            cout << "El numero NO es primo" << endl;
        }



    return 0;
}
