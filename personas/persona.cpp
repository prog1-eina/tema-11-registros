/********************************************************************************
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 15 de noviembre de 2019
 * Resumen: Fichero de implementación «persona.cpp» del módulo «persona».
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
 * Dependencias: - módulo «nif», ubicado en el directorio del proyecto «nifs» de
 *                 este área de trabajo.
 *               - módulo «fecha», ubicado en el directorio de este proyecto.
 * El proyecto ha sido configurado para incluir las ubicaciones anteriores en la
 * lista de inclusión de ficheros de interfaz. Puede modificarse en «Project
 * settings» si no coincidieran con las ubicaciones del equipo en el que se quiera
 * volver a compilar este proyecto.
\********************************************************************************/

#include <cstring>
#include <iostream>
#include "persona.h"
using namespace std;


/*
 * Pre:  ---
 * Post: Ha asignado a «cadena» el nombre completo de la persona «p».
 */
void nombreCompleto(const Persona& p, char cadena[]) {
    strcpy(cadena, p.nombre);
    strcat(cadena, " ");
    strcat(cadena, p.apellidos);
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

    char cadenaNombreCompleto[MAX_LONG_NOMBRE + MAX_LONG_APELLIDOS];
    nombreCompleto(p, cadenaNombreCompleto);
    cout << "Persona: " << cadenaNombreCompleto << endl;
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

