/********************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre
 * Última revisión: 14 de noviembre de 2019
 * Resumen: Programa de ejemplo de uso de los recursos definidos en el módulo
 *          «nif»
 * Codificación de caracteres original de este fichero: UTF-8 sin BOM
\********************************************************************************/

#include <iostream>
#include "nif.hpp"
using namespace std;

/*
 * Programa de ejemplo de uso de los recursos definidos en el módulo «nif».
 */
int main() {
    Nif unNifCualquiera;
    unNifCualquiera.dni = 1234567;
    unNifCualquiera.letra = 'L';
    if (esValido(unNifCualquiera)) {
        mostrar(unNifCualquiera);
        cout << endl;
    }
    else {
        cout << "El NIF no es válido." << endl;
    }
}