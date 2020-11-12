/******************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 12 de noviembre de 2020
 * Resumen: Fichero de implementación «persona.cpp» del módulo «persona».
\******************************************************************************/

#include <iostream>
#include "persona.hpp"
using namespace std;


/*
 * Pre:  ---
 * Post: Ha devuelto una cadena que representa el nombre completo de la 
 *       persona «p».
 */
string nombreCompleto(const Persona& p) {
    return p.nombre + " " + p.apellidos;
}

/*
 * Pre:  ---
 * Post: Ha mostrado los datos de la persona «p» en la pantalla.
 */
void mostrar(const Persona& p) {
    char marcaGenero = 'o';
    if (p.esMujer) {
        marcaGenero = 'a';
    }

    cout << "Persona: " << nombreCompleto(p) << endl;
    cout << "NIF: "; mostrar(p.nif); cout << endl;
    cout << "Nacid" << marcaGenero << " el "; mostrar(p.nacimiento); cout << endl;
    if (p.estaCasado) {
        cout << "Casad" << marcaGenero << endl;
    }
    else {
        cout << "Solter" << marcaGenero << endl;
    }
}


/*
 * Pre:  ---
 * Post: Ha devuelto «true» si y solo si la fecha de nacimiento de «persona1»
 *       es estrictamente anterior a la fecha de nacimiento de «persona2».
 */
bool esMayorQue(const Persona& persona1, const Persona& persona2) {
    return esAnterior(persona1.nacimiento, persona2.nacimiento);
}

