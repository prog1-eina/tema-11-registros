/********************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 10 de noviembre de 2020
 * Resumen: Fichero de interfaz «persona.h» del módulo «persona».
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
 * Dependencias: - módulo «nif», ubicado en el directorio del proyecto «nifs» de
 *                 este área de trabajo.
 *               - módulo «fecha», ubicado en el directorio de este proyecto.
 * El proyecto ha sido configurado para incluir las ubicaciones anteriores en la
 * lista de inclusión de ficheros de interfaz.
\********************************************************************************/

#pragma once

#include <string>
#include "nif.hpp"
#include "fecha.hpp"
using namespace std;

/*
 * Definición del tipo de dato Persona que representa la información relevante
 * de una persona: nombre y apellidos, número de identificación fiscal, fecha
 * de nacimiento, estado civil y sexo
 */
 struct Persona {
     string nombre, apellidos;
     Nif nif;
     Fecha nacimiento;
     bool estaCasado;
     bool esMujer;
};


/*
 * Pre:  ---
 * Post: Ha devuelto una cadena que representa el nombre completo de la 
 *       persona «p».
 */
string nombreCompleto(const Persona& p);


/*
 * Pre:  ---
 * Post: Ha mostrado los datos de la persona «p» en la pantalla.
 */
void mostrar(const Persona& p);


/*
 * Pre:  ---
 * Post: Ha devuelto «true» si y solo si la fecha de nacimiento de «persona1»
 *       es estrictamente anterior a la fecha de nacimiento de «persona2».
 */
bool esMayorQue(const Persona& persona1, const Persona& persona2);
