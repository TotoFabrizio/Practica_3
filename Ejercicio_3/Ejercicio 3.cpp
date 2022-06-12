// Ejercicio 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
//3.	Dado un conjunto (<100) de valores enteros de los cuales el último es cero y no debe procesarse :
//a.informe el valor mínimo, su posición dentro del conjunto, si el mínimo no es único, informar todas las posiciones donde se encuentre.
//b.informe el producto de los elementos impares que ocupen posición par.

int main()
{
    int i = 0, min = 0, posMin[99] = {-1}, prod = 1, cantMin = 0, t = 0,w=0;
    int v[99];
    cout << "ingrese un valor N entero: ";
    cin >> v[t];
    while (t < 99 && v[t] != 0) {
        t++;
        cout << "ingrese un valor N entero: ";
        cin >> v[t];
    };

    while (i < 99 && v[i] != 0) {
        if (min != 0 && v[i] == min)
        {
            posMin[cantMin] = i;
            cantMin++;
        };
        if (min == 0 || v[i] < min) {
            min = v[i];
            for (w = 0;w < 99;w++)posMin[w] = -1;
            cantMin = 0;
            posMin[cantMin] = i;
            cantMin++;
        };
        if ((v[i] % 2 )!= 0 && (i % 2 )== 0) {
            prod *= v[i];
        };
        i++;
    };
    cout << "El valor minimo es: " << min << endl;
    for (i = 0; posMin[i] != -1; i++) {
        cout << "El valor minimo ocupa la posición: " << posMin[i] << endl;
    };
    if (prod == 1){
        cout << "No hubo ningun valor impar en una posición par." << endl;
    }
    else {
        cout << "El producto de los valores impares en una posición par es: " << prod << endl;
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
