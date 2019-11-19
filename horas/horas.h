/********************************************************************************\
 * Curso de Programación 1. Tema 11 (Registros)
 * Autores: Miguel Ángel Latre
 * Última revisión: 12 de noviembre de 2018
 * Resumen: Fichero de interfaz «hora.h» del módulo «hora».
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/


#ifndef HORA_INCLUDED_H
#define HORA_INCLUDED_H

/*
 * Definición del tipo de dato Hora que representa la información de una hora
 * como hora minutos y segundos.
 */
struct Hora {
    int horas, minutos, segundos;
};


/*
 * Pre:  Los valores de los campos horas, minutos y segundos del parámetro
 *       «unaHora» son nulos o positivos.
 * Post: Ha modificado el valor de «unaHora» para que, representando la misma
 *       cantidad de tiempo que al principio, los campos minutos y segundos estén
 *       en el intervalo [0, 60).
 */
void ajustar(Hora& unaHora);


/*
 * Pre:  Los valores de los campos horas, minutos y segundos del parámetro
 *       «unaHora» son nulos o positivos.
 * Post: Ha devuelto la hora correspondiente a «unaHora», después de que haya
 *       transcurrido un tiempo de «segundos» segundos.
 */
Hora sumarSegundos(const Hora unaHora, const int segundos);


/*
 * Pre:  Los valores de los campos horas, minutos y segundos de los parámetros
 *       «horaAnterior» y «horaPosterior» son nulos o positivos y «horaAnterior»
 *       es cronológicamente anterior a «horaPosterior».
 * Post: Ha devuelto la cantidad de tiempo transcurrida entre «horaAnterior» y
 *       «horaPosterior», expresada en segundos.
 */
int tiempoTranscurrido(const Hora horaAnterior, const Hora horaPosterior);


/*
 * Pre:  ---
 * Post: Ha escrito el valor de «unaHora» en pantalla, con el formato "27:59:59" o
 *       "03:04:05".
 */
void mostrar(const Hora unaHora);

#endif // NIF_INCLUDED_H
