/********************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 15 de noviembre de 2019
 * Resumen: Fichero de interfaz «persona.h» del módulo «persona».
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
 * Dependencias: - módulo «nif», ubicado en el directorio del proyecto «nifs» de
 *                 este área de trabajo.
 *               - módulo «fecha», ubicado en el directorio de este proyecto.
 * El proyecto ha sido configurado para incluir las ubicaciones anteriores en la
 * lista de inclusión de ficheros de interfaz.
\********************************************************************************/

#ifndef PERSONA_INCLUDED_H
#define PERSONA_INCLUDED_H

#include "nif.h"
#include "fecha.h"

/*
 * Longitudes máximas del nombre y los apellidos de una persona
 */
const int MAX_LONG_NOMBRE = 48;
const int MAX_LONG_APELLIDOS = 48;

/*
 * Definición del tipo de dato Persona que representa la información relevante
 * de una persona: nombre y apellidos, número de identificación fiscal, fecha
 * de nacimiento, estado civil y sexo
 */
 struct Persona {
     char nombre[MAX_LONG_NOMBRE];
     char apellidos[MAX_LONG_APELLIDOS];
     Nif nif;
     Fecha nacimiento;
     bool estaCasado;
     bool esMujer;
};


/*
 * Pre:  ---
 * Post: Ha asignado a «cadena» el nombre completo del persona «p».
 */
void nombreCompleto(const Persona p, char cadena[]);


/*
 * Pre:  ---
 * Post: Ha mostrado los datos del persona «p» en la pantalla.
 */
void mostrar(const Persona p);


/*
 * Pre:  ---
 * Post: Ha devuelto «true» si y solo si la fecha de nacimiento de «persona1»
 *       es estrictamente anterior a la fecha de nacimiento de «persona2».
 */
bool esMayorQue(const Persona persona1, const Persona persona2);

#endif // PERSONA_INCLUDED_H
