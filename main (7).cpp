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
    float num1; // Declaro la primera variable de tipo float
    float num2; // Declaro la segunda variable de tipo float

    // Solicita al usuario que ingrese dos numeros
    cout << "Ingrese el primer número: ";
    cin >> num1; // guarda el valor dado por el usuario en la variable num1
    cout << "Ingrese el segundo número: ";
    cin >> num2; // guarda el valor dado por el usuario en la variable num2

    // Verificar si el primer número es mayor que el segundo
    if (num1 > num2) // Verifica si el primer número es mayor que el segundo
    {
        // Si cumple la condicion muestra la suma y la diferencia
        cout << "La suma de los dos números es: " << num1 + num2 << endl;
        cout << "La diferencia del primero respecto al segundo es: " << num1 - num2 << endl;
    }
    else // si no cumple la funcion ejecuta lo siguiente
    {
        // como no se cumplio la funcion se muestra el producto y la division
        cout << "El producto de los dos números es: " << num1 * num2 << endl;
        cout << "La división del primero respecto al segundo es: " << num1 / num2 << endl;
    }

    return 0;
}
