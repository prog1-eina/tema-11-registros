/******************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre
 * Última revisión: 12 de noviembre de 2020
 * Resumen: Programa de ejemplo de uso de los recursos definidos en el módulo
 *          «nif»
 * Nota: El código de esta versión está repartido en varios módulos. Para
 *       compilarlo, hay que ejecutar el comando
 *           make nifs
  *       o ejecutar la tarea "Compilar programa «nifs»" de VSC.
 * 
 *       Para ejecutarlo, una vez compilado, hay que ejecutar el comando
 *           ./nifs
 *       o, en Windows,
 *           .\nifs.exe
 *       o ejecutar la tarea "Ejecutar programa «nifs»" de VSC.
\******************************************************************************/

#include <iostream>
#include <cctype>
#include "nif.hpp"
using namespace std;

/*
 * Programa de ejemplo de uso de los recursos definidos en el módulo «nif».
 */
int main() {
    Nif nifUsuario;
    
    cout << "Escriba su DNI: ";
    cin >> nifUsuario.dni;

    cout << "Escriba su letra: ";
    cin >> nifUsuario.letra;

    if (esValido(nifUsuario)) {
        cout << "El NIF ";
        mostrar(nifUsuario);
        cout << " es válido" << endl;
        return 0;
    } else {
        cout << "El NIF no es válido." << endl;
        return 1;
    }
}