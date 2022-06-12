// Ejercicio_5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*Escriba un programa que permita ingresar la tirada de un par de dados 50 veces
y muestre una lista donde se vea cuántas veces se dio cada uno de los resultados posibles.
Por cada tirada se deberán ingresar 2 valores, cada uno representa el valor de un dado.
El formato de la salida debe ser el siguiente :
2 salió ... veces
3 salió ... veces
. . 12 salió ... veces*/



#include <iostream>
using namespace std;


int main()
{
	int i, j, dado1, dado2, cant[11] = {0};
	for (i = 0; i < 10; i++) {
		cout << "Ingrese el valor del primer dado: ";
		cin >> dado1;
		cout << "Ingrese el valor del segundo dado: ";
		cin >> dado2;
		cout << endl;
		for (j = 0; j < 11; j++) {
			if (dado1 + dado2 == j + 2)cant[j]++;
		}
	};
	for ( i = 0; i < 11; i++)
	{
		cout << i + 2 << " salio " << cant[i] << " veces." << endl;
	}
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
