// Ejercicio_4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*4.	Dado un número N (<25), y dos vectores A y B de N elementos que contenga
valores reales
a) genere e informe un tercer vector C intercalando los valores de posición impar de A y los valores de posición par de B.
b) genere e informe un tercer vector D donde cada elemento contenga un valor cero silos elementos de una misma posición de A y B son iguales,
o un valor uno si no lo son.*/

#include <iostream>
using namespace std;

int main()
{
    int N, A[24], B[24], C[24],D[24],i;
	cout << "ingrese un valor N: ";
	cin >> N;

	for (i = 0; i < N; i++) {
		cout << "Ingrese el valor de la posicion " << i << " del vector A: ";
		cin >> A[i];
	};
	cout << endl;
	for (i = 0; i < N; i++) {
		cout << "Ingrese el valor de la posicion " << i << " del vector B: ";
		cin >> B[i];
	};
	cout << endl;

	for (i = 0; i < N; i++) {
		if (i % 2 == 0)C[i] = B[i];
		if (i % 2 != 0)C[i] = A[i];
	};
	for (i = 0; i < N; i++) {
		if (A[i] == B[i])D[i] = 0;
		if (A[i] != B[i])D[i] = 1;
	};
	for (i = 0; i < N; i++)
	{
		cout << "Vector C posicion " << i << " valor: " << C[i] << endl;
	};
	cout << endl;
	for (i = 0; i < N; i++)
	{
		cout << "Vector D posicion " << i << " valor: " << D[i] << endl;
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
