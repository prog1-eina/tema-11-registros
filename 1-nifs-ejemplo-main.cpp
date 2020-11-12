/******************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre
 * Última revisión: 12 de noviembre de 2020
 * Resumen: Programa de ejemplo de uso de los recursos definidos en el módulo
 *          «nif»
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
    }
    else {
        cout << "El NIF no es válido." << endl;
        return 1;
    }
}