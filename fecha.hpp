/******************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 12 de noviembre de 2020
 * Resumen: Fichero de interfaz «fecha.hpp» del módulo «fecha».
\******************************************************************************/

#pragma once

/*
 * Definición del tipo de dato Fecha
 */
struct Fecha {
    unsigned dia, mes, agno;
};


/*
 * Pre:  ---
 * Post: Ha mostrado la fecha «f» en la pantalla.
 */
void mostrar(const Fecha f);


/*
 * Pre:  Los valores de los parámetros «f1» y «f2» representan fechas válidas 
 *       del calendario gregoriano.
 * Post: Ha devuelto true si y solo si la fecha representada por el valor
 *       del parámetro «f1» es cronológicamente anterior a la representada por
 *       «f2».
 */
bool esAnterior(const Fecha f1, const Fecha f2);
