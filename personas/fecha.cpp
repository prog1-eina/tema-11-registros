/********************************************************************************
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 13 de noviembre de 2018
 * Resumen: Fichero de implementación «fecha.cpp» del módulo «fecha».
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/

#include <iostream>
#include "fecha.hpp"
using namespace std;

/*
 * Pre:  ---
 * Post: Ha mostrado la fecha «f» en la pantalla.
 */
void mostrar(const Fecha f) {
    cout << f.dia << "-" << f.mes << "-" << f.agno;
}


/*
 * Pre:  «f» representa una fecha válida del calendario gregoriano.
 * Post: Ha devuelto un entero que, al ser escrito en base 10, tiene un formato de
 *       ocho dígitos «aaaammdd» que representa la fecha «dia/mes/agno» donde los
 *       dígitos «aaaa» representan el año de la fecha, los dígitos «mm», el mes y
 *       los dígitos «dd», el día.
 */
int componer(const Fecha f) {
    return f.agno * 10000 + f.mes * 100 + f.dia;
}


/*
 * Pre:  Los valores de los parámetros «f1» y «f2» representan fechas válidas del
 *       calendario gregoriano.
 * Post: Ha devuelto true si y solo si la fecha representada por el valor
 *       del parámetro «f1» es cronológiamente anterior a la representada por
 *       «f2».
 */
bool esAnterior(const Fecha f1, const Fecha f2) {
    return componer(f1) < componer(f2);
}

