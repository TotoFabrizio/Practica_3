// Ejercicio 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
//2.	Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. 
//Si el último elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los demás

int main()
{
    int n,vec[30],i, valor, largo;
    cout << "Ingrese un valor entero N menor a 30: ";
    cin >> n;
    cout << endl;
    for (i = 0; i < n; i++) {
        cout << "Ingrese el valor numero " << i << " de la cadena: ";
        cin >> valor;
        cout << endl;
        vec[i] = valor;
    };
    for ( i = 0; i < n; i++)
    {
        if (vec[n-1] < 10 && vec[i] < 0) cout << vec[i] << endl;
        if (vec[n-1] >= 10 && vec[i] >= 0) cout << vec[i] << endl ;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
