#include <iostream>
/*
5. Sumar todos los numeros hasta un limite anache
[] Declarar la variable "numero"
[] Declarar la variable "contador" para usarlo como contador
[] Pedir a el usuario que ingrese un numero
[] Inicializar la variable "numero"
[] Hacer un for que vaya viendo numero por numero hasta el ingresado
[] Dentro del for, hacer que el contador se sume a cada numero
[] Mostrar al usuario el resultado final de la sumatoria
*/

using namespace std;
int main ()
{

    int numero;
    int contador = 0;

    cout << "Ingrese un numero para ver la sumatoria de todos los anteriores y el mismo." << endl;
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        contador = contador + i;
    }

    cout << "La sumatoria es igual a " << contador << endl;

    return 0;
}
