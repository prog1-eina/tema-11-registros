/********************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre
 * Última revisión: 14 de noviembre de 2019
 * Resumen: Programa de ejemplo de uso de los recursos definidos en el módulo
 *          «horas»
 * Codificación de caracteres original de este fichero: UTF-8 sin BOM
\********************************************************************************/

#include <iostream>
#include "horas.h"
using namespace std;

/*
 * Programa de ejemplo de uso de los recursos definidos en el módulo «horas».
 */
int main() {
    Hora h1 = {0, 106, 39};
    ajustar(h1);
    mostrar(h1);
    cout << endl;

    Hora h2 = sumarSegundos(h1, 3600);
    mostrar(h2);
    cout << endl;

    cout << calcularTiempoTranscurrido(h1, h2) << endl;
    
    return 0;
}
