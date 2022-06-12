// Ejercicio_6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

/*6.	En un club social se abrieron las inscripciones de los socios distintos deportes,
codificados de 1a 20, y de cada inscripción se conoce número de socio y código de deporte.
Las inscripciones finalizan con un número de socio igual a 0.
Se pide informar:
•la cantidad de inscriptos en cada deporte
•el código de deporte con la mayor cantidad de inscriptos
*/

#include <iostream>
using namespace std;

struct inscripcion
{
    int numeroSocio;
    int codigoDeporte;
};

int main()
{
    inscripcion inscripciones[30];
    int cantDep[20] = { 0 }, i=0, j, maxCant;

    cout << "ingrese el numero de socio: ";
    cin >> inscripciones[i].numeroSocio;
    cout << "ingrese el codigo de deporte: ";
    cin >> inscripciones[i].codigoDeporte;

    for ( i = 1; i < 30 && inscripciones[i-1].numeroSocio!=0; i++)
    {
        cout << "ingrese el numero de socio: ";
        cin >> inscripciones[i].numeroSocio;
        cout << "ingrese el codigo de deporte: ";
        cin >> inscripciones[i].codigoDeporte;
        cout << endl;
    }
    
    for (i = 0; inscripciones[i].numeroSocio != 0; i++)
    {
        cantDep[inscripciones[i].codigoDeporte - 1]++;
    };

    for (j = 0; j < 20; j++)
    {
        maxCant = 0;
        if (cantDep[maxCant] < cantDep[j]) {
            i = j;
            j++;
        }
        else {
            j++;
        };
    };

    for (i = 0; i < 20; i++)
    {
        cout << "Cant deporte " << 1 + i << " : " << cantDep[i] << endl;
    };
    cout << "Codigo del deporte con mas inscriptos: " << maxCant + 1 << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
