// Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

//Dado un número N (<30), genere e informe un vector VEC de N elementos que contenga los primeros N números naturales pares.
int main()
{
	int N, i,v=0;
	cout << "Ingrese un numero N(menor a 30): ";
	cin >> N;
	int vec[29];
	for (i = 0; i < N; i++)
	{
		vec[i] = v;
		v += 2;
	};
	for (i = 0; i < N;i++) {
		cout << vec[i] << endl;
	};
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
