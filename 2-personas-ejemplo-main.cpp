/******************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre
 * Última revisión: 12 de noviembre de 2020
 * Resumen: Programa de ejemplo de uso de los recursos definidos en el módulo
 *          «persona»
 * Nota: El código de esta versión está repartido en varios módulos. Para
 *       compilarlo, hay que ejecutar el comando
 *           make personas
  *       o ejecutar la tarea "Compilar programa «personas»" de VSC.
 * 
 *       Para ejecutarlo, una vez compilado, hay que ejecutar el comando
 *           ./personas
 *       o, en Windows,
 *           .\personas.exe
 *       o ejecutar la tarea "Ejecutar programa «personas»" de VSC.
\******************************************************************************/

#include <iostream>
#include "persona.hpp"
using namespace std;

/*
 * Programa de ejemplo de uso de los recursos definidos en el módulo «persona».
 */
int main() {

    // Declaración e inicialización campo a campo (de tipo simple o cadena)
    Persona rey;
    rey.nombre = "Felipe";
    rey.apellidos = "Borbón Grecia";
    rey.nif.dni = 15;
    rey.nif.letra = 'S';
    rey.nacimiento.dia = 30;
    rey.nacimiento.mes = 1;
    rey.nacimiento.agno = 1968;
    rey.estaCasada = true;
    mostrar(rey);
    cout << endl;

    // Declaración e inicialización de forma totalmente agregada
    Persona reinaEmerita = { "Sofía",             // nombre
                             "Grecia Dinamarca",  // apellidos
                             {11, 'B'},           //  NIF
                             {2, 11, 1938},       // fecha de nacimiento
                             true                 // estaCasada
    };
    mostrar(reinaEmerita);
    cout << endl;

    // Declaración e inicialización campo a campo del registro principal y
    // agregada en los campos de tipo registro.
    Persona princesa;
    princesa.nombre = "Leonor";
    princesa.apellidos = "Borbón Ortiz";
    princesa.nif = {16, 'Q'};
    princesa.nacimiento = {31, 10, 2005};
    princesa.estaCasada = false;
    mostrar(princesa);
    cout << endl;
    
    return 0;
}
