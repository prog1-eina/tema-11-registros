﻿/********************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 14 de noviembre de 2019
 * Resumen: Fichero de interfaz «nif.h» del módulo «nif».
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/

#ifndef NIF_INCLUDED_H
#define NIF_INCLUDED_H

/*
 * Definición del tipo de dato Nif que representa la información del NIF
 * (Número de Identificación Fiscal) de una persona.
 */
struct Nif {
    int dni;            // número del DNI de la persona
    char letra;         // letra asociada al número de DNI anterior
};


/*
 * Pre:  ---
 * Post: Ha devuelto la letra del número de identificación fiscal que corresponde
 *       a un número de documento nacional de identidad igual a «dni».
 */
char calcularLetra(const int dni);


/*
 * Pre:  ---
 * Post: Ha devuelto «true» si y solo si «nifAValidar» define un NIF válido, es
 *       decir, su letra es la que le corresponde a su DNI.
 */
bool esValido(const Nif nifAValidar);


/*
 * Pre:  El valor del parámetro «nifAEscribir» representa un NIF válido.
 * Post: Ha escrito «nifAEscribir» en pantalla, con un formato como «01234567-L».
 */
void mostrar(const Nif nifAEscribir);

#endif // NIF_INCLUDED_H
