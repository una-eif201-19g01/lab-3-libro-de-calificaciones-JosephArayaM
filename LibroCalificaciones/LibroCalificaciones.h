/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Joseph Araya Moore / joedarayamo@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_H

#include <iomanip>
#include <iostream>
#include <string>

static const int ESTUDIANTES =10;
static const int EXAMENES =3;

class LibroCalificaciones {
private:
    std::string nombreCurso;
    int calificaciones[ESTUDIANTES][EXAMENES];
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double obtenerPromedio(int est);
public:
    LibroCalificaciones();
    LibroCalificaciones(const std::string curso,int CAL[ESTUDIANTES][EXAMENES]);
    std::string obtenerReporteNotas();
    std::string obtenerReporteNotasMaxMin();
    void setNombreCurso(std::string nombreCurso);
    std::string getNombreCurso();
    
};
#endif /* LIBROCALIFICACIONES_H */

