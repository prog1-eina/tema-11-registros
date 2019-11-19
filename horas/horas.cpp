/*********************************************************************************
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre
 * Última revisión: 12 de noviembre de 2018
 * Resumen: Fichero de implementación «hora.cpp» del módulo «hora».
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/

#include <iostream>
#include <iomanip>
#include "horas.h"
using namespace std;

/*
 * Pre:  Los valores de los campos horas, minutos y segundos del parámetro
 *       «unaHora» son nulos o positivos.
 * Post: Ha modificado el valor de «unaHora» para que, representando la misma
 *       cantidad de tiempo que al principio, los campos minutos y segundos estén
 *       en el intervalo [0, 60).
 */
void ajustar(Hora& unaHora) {
    unaHora.minutos += unaHora.segundos / 60;
    unaHora.segundos = unaHora.segundos % 60;

    unaHora.horas += unaHora.minutos / 60;
    unaHora.minutos = unaHora.minutos % 60;
}


/*
 * Pre:  Los valores de los campos horas, minutos y segundos del parámetro
 *       «unaHora» son nulos o positivos.
 * Post: Ha devuelto la hora correspondiente a «unaHora», después de que haya
 *       transcurrido un tiempo de «segundos» segundos.
 */
Hora sumarSegundos(const Hora unaHora, const int segundos) {
    Hora resultado = unaHora;
    resultado.segundos += segundos;
    ajustar(resultado);
    return resultado;
}


/*
 * Pre:  Los valores de los campos horas, minutos y segundos del parámetro
 *       «unaHora» son nulos o positivos.
 * Post: Ha devuelto la cantidad de tiempo correspondiente a «h» expresada en
 *       segundos.
 */
int segundosTotales(const Hora h) {
    return h.horas * 3600 + h.minutos * 60 + h.segundos;
}

/*
 * Pre:  Los valores de los campos horas, minutos y segundos de los parámetros
 *       «horaAnterior» y «horaPosterior» son nulos o positivos y «horaAnterior»
 *       es cronológicamente anterior a «horaPosterior».
 * Post: Ha devuelto la cantidad de tiempo transcurrida entre «horaAnterior» y
 *       «horaPosterior», expresada en segundos.
 */
int tiempoTranscurrido(const Hora horaAnterior,
                       const Hora horaPosterior) {
    return segundosTotales(horaPosterior) - segundosTotales(horaAnterior);
}



/*
 * Pre:  ---
 * Post: Ha escrito el valor de «unaHora» en pantalla, con el formato "27:59:59" o
 *       "03:04:05".
 */
void mostrar(const Hora unaHora) {
    cout << setfill('0');
    cout << setw(2) << unaHora.horas << ":"
         << setw(2) << unaHora.minutos << ":"
         << setw(2) << unaHora.segundos;
    cout << setfill(' ');
}
