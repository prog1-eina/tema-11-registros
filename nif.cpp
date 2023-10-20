/******************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 20 de octubre de 2023
 * Resumen: Fichero de implementación «nif.cpp» del módulo «nif».
\******************************************************************************/

#include "nif.hpp"
#include <cctype>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Pre:  ---
 * Post: Devuelve la letra del número de identificación fiscal que corresponde
 *       a un número de documento nacional de identidad igual a «dni».
 */
char calcularLetra(const unsigned dni) {
    const unsigned NUM_LETRAS = 23;
    const string TABLA_NIF = "TRWAGMYFPDXBNJZSQVHLCKE";
    return TABLA_NIF.at(dni % NUM_LETRAS);
}

/*
 * Pre:  ---
 * Post: Devuelve «true» si y solo si «nifAValidar» define un NIF válido, es
 *       decir, su letra es la que le corresponde a su DNI.
 */
bool esValido(const Nif nifAValidar) {
    return calcularLetra(nifAValidar.dni) == toupper(nifAValidar.letra);
}


/*
 * Pre:  El valor del parámetro «nifAEscribir» representa un NIF válido.
 * Post: Escribe «nifAEscribir» en pantalla, con un formato como «01234567-L».
 *       También modifica el carácter de relleno que utiliza el manipulador «setw»,
 *       estableciendo el espacio en blanco.
 */
void mostrar(const Nif nifAEscribir) {
    cout << setfill('0');
    cout << setw(8) << nifAEscribir.dni << "-" << nifAEscribir.letra;
    cout << setfill(' ');
}
