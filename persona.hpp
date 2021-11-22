/******************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 12 de noviembre de 2020
 * Resumen: Fichero de interfaz «persona.hpp» del módulo «persona».
\******************************************************************************/

#pragma once

#include <string>
#include "nif.hpp"
#include "fecha.hpp"
using namespace std;

/*
 * Definición del tipo de dato Persona que representa la información relevante
 * de una persona: nombre y apellidos, número de identificación fiscal, fecha
 * de nacimiento y estado civil
 */
 struct Persona {
    string nombre, apellidos;
    Nif nif;
    Fecha nacimiento;
    bool estaCasada;
};


/*
 * Pre:  ---
 * Post: Ha devuelto una cadena que representa el nombre completo de la 
 *       persona «p».
 */
string nombreCompleto(const Persona p);


/*
 * Pre:  ---
 * Post: Ha mostrado los datos de la persona «p» en la pantalla.
 */
void mostrar(const Persona p);


/*
 * Pre:  ---
 * Post: Ha devuelto «true» si y solo si la fecha de nacimiento de «persona1»
 *       es estrictamente anterior a la fecha de nacimiento de «persona2».
 */
bool esMayorQue(const Persona persona1, const Persona persona2);
