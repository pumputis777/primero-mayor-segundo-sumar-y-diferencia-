/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    // Declaración de las variables
    float num1;
    float num2;

    // Solicitar la carga de dos números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Verificar si el primer número es mayor que el segundo
    if (num1 > num2)
    {
        // Si es mayor, mostrar la suma y la diferencia
        cout << "La suma de los dos números es: " << num1 + num2 << endl;
        cout << "La diferencia del primero respecto al segundo es: " << num1 - num2 << endl;
    }
    else
    {
        // Si no es mayor, mostrar el producto y la división
        cout << "El producto de los dos números es: " << num1 * num2 << endl;
        cout << "La división del primero respecto al segundo es: " << num1 / num2 << endl;
    }

    return 0;
}