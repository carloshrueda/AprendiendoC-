// BufferEntrada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char nombre[25];
	int edad;

	cout << "Ingrese la edad\n";
	cin >> edad;
	cin.ignore(); //ignora el primer caracter que encuentre en el buffer de entrada
	//cin.ignore(256); //ignora los siguientes 256 caracteres

	cout << "Ingrese el nombre\n";
	cin.getline(nombre, 25);
	cout << "Longitud de nombre: " << (unsigned)strlen(nombre) << "\n";

	system("PAUSE");
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
