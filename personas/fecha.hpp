/********************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 13 de noviembre de 2018
 * Resumen: Fichero de interfaz «fecha.h» del módulo «fecha».
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
 * Directorio en el que ubicarlo: Programacion1/Biblioteca/
\********************************************************************************/

#ifndef TIPO_FECHA_INCLUDED_H
#define TIPO_FECHA_INCLUDED_H

/*
 * Definición del tipo de dato Fecha
 */
struct Fecha {
    int dia, mes, agno;
};


/*
 * Pre:  ---
 * Post: Ha mostrado la fecha «f» en la pantalla.
 */
void mostrar(const Fecha f);

/*
 * Pre:  Los valores de los parámetros «f1» y «f2» representan fechas válidas del
 *       calendario gregoriano.
 * Post: Ha devuelto true si y solo si la fecha representada por el valor
 *       del parámetro «f1» es cronológiamente anterior a la representada por
 *       «f2».
 */
bool esAnterior(const Fecha f1, const Fecha f2);

#endif   // TIPO_FECHA_INCLUDED_H

