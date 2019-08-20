/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Permite mostrar las calificaciones de un curso
 *
 *        Created:  2019-08-12
 *
 *         Author:  Joseph Araya Moore / joedarayamo@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "LibroCalificaciones.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    static const int ESTUDIANTES =10;
    static const int EXAMENES =3;
    
    int listaCal[ESTUDIANTES][EXAMENES] = {
        {87,96,70},{60,87,90},{94,100,90},{100,81,82},{83,65,85},
        {78,87,65},{85,75,83},{91,94,100},{76,72,84},{87,93,73}
    };
    LibroCalificaciones libroCal("Progra 1", listaCal);
    
    cout<<libroCal.obtenerReporteNotas()<<endl;
    cout<<libroCal.obtenerReporteNotasMaxMin()<<endl;
    
    return 0;
}

