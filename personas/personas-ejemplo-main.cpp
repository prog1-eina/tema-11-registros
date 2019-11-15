/********************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre
 * Última revisión: 14 de noviembre de 2019
 * Resumen: Programa de ejemplo de uso de los recursos definidos en el módulo
 *          «persona»
 * Codificación de caracteres original de este fichero: UTF-8 sin BOM
\********************************************************************************/

#include <iostream>
#include <cstring>
#include "persona.h"
using namespace std;

/*
 * Programa de ejemplo de uso de los recursos definidos en el módulo «persona».
 */
int main() {
    Persona rey;
    strcpy(rey.nombre, "Felipe");
    strcpy(rey.apellidos, "Borbón Grecia");
    rey.nif.dni = 15;
    rey.nif.letra = 'S';
    rey.nacimiento.dia = 30;
    rey.nacimiento.mes = 1;
    rey.nacimiento.agno = 1968;
    rey.esMujer = false;
    rey.estaCasado = true;
    mostrar(rey);
    cout << endl;

    Persona reinaEmerita = { "Sofia",  // nombre
                               "Grecia Dinamarca",  // apellidos
                               {11, 'B'}, //  NIF
                               {2, 11, 1938},  // fecha de nacimiento
                               true,  // esMujer
                               true   // estaCasada
    };
    mostrar(reinaEmerita);
    cout << endl;

    Persona princesa = {"Leonor", "Borbón Ortiz"};
    princesa.nif = {16, 'Q'};
    princesa.nacimiento = {19, 6, 2014};
    princesa.esMujer = true;
    princesa.estaCasado = false;
    mostrar(princesa);
    cout << endl;
    
    return 0;
}
